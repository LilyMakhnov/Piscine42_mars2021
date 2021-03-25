/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 07:52:28 by esivre            #+#    #+#             */
/*   Updated: 2021/03/23 09:38:52 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char *a)
{
	int i;

	i = 0;
	while (a[i])
		i++;
	write(1, a, i);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;
	char			a;

	if (nb < 0)
		write(1, "-", 1);
	n = (nb < 0 ? -nb : nb);
	while (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	a = '0' + n;
	write(1, &a, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putchar(par->str);
		ft_putchar(par->copy);
		par++;
	}
}
