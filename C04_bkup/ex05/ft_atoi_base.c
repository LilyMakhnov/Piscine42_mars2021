/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:05:40 by esivre            #+#    #+#             */
/*   Updated: 2021/03/21 07:33:20 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_size(char *base);

int ft_check_base(char *base, int size_base);

int check_isinbase(char a, char *base);

int	ft_atoi_base_nb(char *str, char *base, int size_base, int i);

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int size_base;
	int sign;

	size_base = ft_size(base);
	if (ft_check_base(base, size_base) == 1)
	{
		i = 0;
		sign = 1;
		while ((str[i] <= '\r' && str[i] >= '\t') || *str == ' ')
		i++;
		while (str[i] == '+' || str[i] == '-' )
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		return (sign * ft_atoi_base_nb(str, base, size_base, i));
	}
	return (0);
}

int	ft_atoi_base_nb(char *str, char *base, int size_base, int i)
{
	int resultat;
	int position;

	resultat = 0;
	while (str[i])
	{
		position = check_isinbase(str[i], base);
		if (position == size_base)
			return (resultat);
		resultat = resultat * size_base + position;	
		i++;
	}	
	return (resultat);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}


int	ft_size(char *base)
{
	int i;

	i = 0;
	while(base[i])
		i++;
	return (i);
}

int ft_check_base(char *base, int size_base)
{
	int i;
	int j;

	if(size_base < 2)
		return (0);
	i = 0;
	while (i < size_base)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < size_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int check_isinbase(char a, char *base)
{	
	int i;

	i = 0;
	while (base[i])
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (i);
}
