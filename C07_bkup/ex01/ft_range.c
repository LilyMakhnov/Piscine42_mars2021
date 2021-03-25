/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:25:28 by esivre            #+#    #+#             */
/*   Updated: 2021/03/24 14:27:38 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ret;
	int i;
	int size;

	if (min >= max)
		return (NULL);
	size = max - min;
	if (!(ret = malloc(sizeof(int) * size)))
		return (NULL);
	i = -1;
	while (++i < size)
		ret[i] = min + i;
	return (ret);
}
