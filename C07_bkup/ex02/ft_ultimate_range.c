/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:46:40 by esivre            #+#    #+#             */
/*   Updated: 2021/03/27 11:02:58 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = malloc(sizeof(int) * (max- min))))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min++;
		i++;
	}
	return (i);
}

int main(int argc, char ** argv)
{
	int *tab;
	int size;
	int i;

	(void)argc;
	size = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	printf("length : %i\n", size);
	i = 0;
	printf("%d, ", tab[0]);
	printf("%d, ", tab[size-1]);

	return (0);
}
