/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 07:52:28 by esivre            #+#    #+#             */
/*   Updated: 2021/03/23 09:35:16 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_copy(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_size(src) + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tabst;
	int			i;

	if (!(tabst = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		tabst[i].size = ft_size(av[i]);
		tabst[i].str = av[i];
		tabst[i].copy = ft_copy(av[i]);
	}
	tabst[ac].str = 0;
	return (tabst);
}
