/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:31:25 by esivre            #+#    #+#             */
/*   Updated: 2021/03/26 14:58:54 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_size_dest(int i, int size);

char			*ft_putnbr_base(int nb, char *base, int size)
{
	unsigned int	i;
	char			*dest;;
	unsigned int	n;

	i = ft_size_dest(nb, size);
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	n = (nb < 0 ? -nb : nb);
	dest[i] = '\0';	
	if (nb == 0)
	{
		dest[0] = base[0];
		return (dest);
	}	
	while (i--)
	{
		dest[i] = base[n % size];
		n /= size;
	}	
	if (nb < 0)
		dest[0] = '-';
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
	return (j + (i <= 0 ? 1 : 0));
}
