/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:31:25 by esivre            #+#    #+#             */
/*   Updated: 2021/03/25 11:07:24 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_size_dest(int i, int size);

unsigned int	ft_power(unsigned int a, unsigned int p);

char			*ft_putnbr_base(int nb, char *base, int size)
{
	unsigned int	i;
	char			*dest;
	long int		index;
	unsigned int	size_dest;
	unsigned int	n;

	size_dest = ft_size_dest(nb, size);
	if (!(dest = malloc(sizeof(char) * (size_dest + 1))))
		return (NULL);
	i = 0;
	if (nb < 0)
		dest[i++] = '-';
	n = (nb < 0 ? -nb : nb);
	while (i < size_dest)
	{
		index = (n / (ft_power(size, size_dest - 1 - i))) % size;
		dest[i++] = base[index];
	}
	dest[i] = 0;
	return (dest);
}

unsigned int	ft_size_dest(int i, int size)
{
	unsigned int	j;
	unsigned int	n;
	
	n = (i < 0 ? -i : i);
	j = 0;
	while (n > 0)
	{
		n = n / size;
		j++;
	}
	return (j + (i < 0 ? 1 : 0));
}

unsigned int	ft_power(unsigned int a, unsigned int p)
{
	if (p == 0)
		return (1);
	return (a * ft_power(a, p - 1));
}
