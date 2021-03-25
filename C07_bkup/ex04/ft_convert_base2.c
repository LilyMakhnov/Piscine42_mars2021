/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:31:25 by esivre            #+#    #+#             */
/*   Updated: 2021/03/24 11:43:48 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_size_dest(int i, int size);

int		ft_power(int a, int p);

char	*ft_putnbr_base(int nb, char *base, int size)
{
	int				i;
	unsigned int	n;
	char			*dest;
	int				neg;
	int				index;

	if (!(dest = malloc(sizeof(char)
					* (ft_size_dest(nb, size) + (nb < 0 ? 2 : 1)))))
		return (NULL);
	i = 0;
	neg = 0;
	if (nb < 0)
	{
		dest[i++] = '-';
		neg = 1;
	}
	n = (nb < 0 ? -nb : nb);
	while (i < ft_size_dest(n, size) + neg)
	{
		index = (n / (ft_power(size, ft_size_dest(n, size) - 1 - i))) % size;
		dest[i++] = base[index];
	}
	dest[i] = 0;
	return (dest);
}

int		ft_size_dest(int i, int size)
{
	int				j;
	unsigned int	n;

	n = (i < 0 ? -i : i);
	j = 0;
	while (n > 0)
	{
		n = n / size;
		j++;
	}
	return (j);
}

int		ft_power(int a, int p)
{
	if (p == 0)
		return (1);
	return (a * ft_power(a, p - 1));
}
