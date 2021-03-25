/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 07:46:48 by esivre            #+#    #+#             */
/*   Updated: 2021/03/20 14:46:01 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int i;
	int j;

	i = size - 1;
	while (i >= 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[i] < tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i--;
	}
}
