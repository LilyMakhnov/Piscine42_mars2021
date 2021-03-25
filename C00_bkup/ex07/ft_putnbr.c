/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:38:54 by esivre            #+#    #+#             */
/*   Updated: 2021/03/14 10:00:48 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
	{
		n = nb;
	}
	while (n > 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
