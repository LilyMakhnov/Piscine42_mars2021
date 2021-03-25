/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:18:18 by esivre            #+#    #+#             */
/*   Updated: 2021/03/22 11:20:24 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	while (argc > 1)
		print_char(argv[--argc]);
	return (0);
}
