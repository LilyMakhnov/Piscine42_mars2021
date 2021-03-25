/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:21:33 by esivre            #+#    #+#             */
/*   Updated: 2021/03/24 11:36:24 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_atoi_base(char *nbr, char *basefrom, int size);

int		is_in_base(char a, char *base);

int		base_check(char *base);

char	*ft_putnbr_base(int nb, char *base, int size);

int		ft_size_dest(int i, int size);

int		ft_power(int a, int p);

int		base_check(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
				|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	if (i < 2)
		return (0);
	return (i);
}

int		is_in_base(char a, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *nbr, char *basefrom, int size)
{
	int i;
	int sign;
	int res;
	int position;

	i = 0;
	sign = 1;
	res = 0;
	while (nbr[i] == ' ' || (nbr[i] <= 13 && nbr[i] >= 9))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i])
	{
		position = is_in_base(nbr[i], basefrom);
		if (position == -1)
			return (sign * res);
		res = res * size + position;
		i++;
	}
	return (sign * res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		size_bf;
	int		size_bt;
	char	*dest;

	if (!(size_bf = base_check(base_from))
				|| !(size_bt = base_check(base_to)))
		return (0);
	i = ft_atoi_base(nbr, base_from, size_bf);
	dest = ft_putnbr_base(i, base_to, size_bt);
	return (dest);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
