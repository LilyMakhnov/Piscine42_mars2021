/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:38:54 by esivre            #+#    #+#             */
/*   Updated: 2021/03/11 16:53:51 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_pow(int a, int n);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_print_combn(int n);



int	main(void)
{
	ft_print_combn(2);
	return (0);
}

int ft_pow(int a, int n)
{
	if (n == 0) return 1;
	else return a * ft_pow(a, n - 1);
}

void	ft_print_combn(int n)
{
	int limit;
	int i;
	
	limit = ft_pow(10, n) - 1;
	i = 0;
	while (i < limit)
	{
		if ()
		ft_putnbr(i);
		write(1, ", ", 2);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if( nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	
	ft_putchar(nb + '0');
}	

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
