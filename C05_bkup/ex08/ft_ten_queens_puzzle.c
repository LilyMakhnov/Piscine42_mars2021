/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:59:45 by esivre            #+#    #+#             */
/*   Updated: 2021/03/22 11:04:22 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve(int x, int *tab, int *nb);

void	ft_print_tab(int *tab);

int		check(int i, int x, int *tab);

int		ft_ten_queens_puzzle(void)
{
	int nb;
	int tab[10];

	nb = 0;
	ft_solve(0, tab, &nb);
	return (nb);
}

void	ft_solve(int x, int *tab, int *nb)
{
	int i;

	if (x == 10)
	{
		ft_print_tab(tab);
		*nb = *nb + 1;
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (check(i, x, tab) == 1)
			{
				tab[x] = i;
				ft_solve(x + 1, tab, nb);
			}
			i++;
		}
	}
}

void	ft_print_tab(int *tab)
{
	char	a;
	int		i;

	i = 0;
	while (i < 10)
	{
		a = '0' + tab[i++];
		write(1, &a, 1);
	}
	write(1, "\n", 1);
}

int		check(int i, int x, int *tab)
{
	int j;

	j = 0;
	while (j < x && i != tab[j] && i != tab[j] + (x - j)
				&& i != tab[j] - (x - j))
		j++;
	if (j == x)
		return (1);
	return (0);
}
