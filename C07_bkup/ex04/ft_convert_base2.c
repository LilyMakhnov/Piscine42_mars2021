/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:31:25 by esivre            #+#    #+#             */
/*   Updated: 2021/03/25 14:48:41 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_size_dest(int i, int size);

char			*ft_putnbr_base(int nb, char *base, int size)
{
	unsigned int	i;
	char			*dest;
	unsigned int	size_dest;
	unsigned int	n;

	i = ft_size_dest(nb, size);
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	n = (nb < 0 ? -nb : nb)
	i = size_dest
	while (i--)
	{
		dest[size_dest - i] = base[n % size];
		n /= size;
	}	
	if (nb < 0)
		dest[0] = '-';
	dest[size_dest] = 0;
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
