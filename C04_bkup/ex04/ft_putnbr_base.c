/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 08:37:43 by esivre            #+#    #+#             */
/*   Updated: 2021/03/18 08:44:19 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_base(char *base, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = 0;
	while (base[size])
		size++;
	if (ft_check_base(base, size) == 1 && size > 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		while (nbr > size - 1)
		{
			ft_putnbr_base(nbr / size, base);
			nbr %= size;
		}
		write(1, base + nbr, 1);
	}
}
