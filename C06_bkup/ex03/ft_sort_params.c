/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:40:39 by esivre            #+#    #+#             */
/*   Updated: 2021/03/22 11:42:43 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	swap(char **s1, char **s2)
{
	char *swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

void	printchar(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int diff;
	int i;
	int j;

	i = argc - 1;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			diff = ft_strcmp(argv[i], argv[j]);
			if (diff < 0)
				swap(&argv[i], &argv[j]);
			j++;
		}
		i--;
	}
	i = 1;
	while (argv[i])
	{
		printchar(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
