/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:28:55 by esivre            #+#    #+#             */
/*   Updated: 2021/03/18 07:16:36 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(unsigned char a);

void	ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
			ft_print_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_hexa(unsigned char a)
{
	char *hexa;

	hexa = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexa[a / 16], 1);
	write(1, &hexa[a % 16], 1);
}
