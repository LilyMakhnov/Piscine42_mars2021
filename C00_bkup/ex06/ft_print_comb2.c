/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:14:01 by esivre            #+#    #+#             */
/*   Updated: 2021/03/13 11:13:04 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int num);

void	ft_print_int(int num)
{
	int digit1;
	int digit2;

	digit1 = num % 10 + '0';
	digit2 = num / 10 + '0';
	write(1, &digit2, 1);
	write(1, &digit1, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	j = 0;
	while (j < 99)
	{
		i = j;
		while (i < 99)
		{
			ft_print_int(j);
			write(1, " ", 1);
			ft_print_int(++i);
			if (!(i == 99 && j == 98))
			{
				write(1, ", ", 2);
			}
		}
		j++;
	}
}
