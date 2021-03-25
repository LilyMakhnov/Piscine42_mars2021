/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:31:15 by esivre            #+#    #+#             */
/*   Updated: 2021/03/25 08:23:59 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strlendes(int size, char **strs, char *sep)
{
	int i;
	int size_dest;

	size_dest = 0;
	i = -1;
	if (size > 0)
	{
		while (++i < size)
		{
			size_dest += ft_strlen(strs[i]);
			size_dest += ft_strlen(sep);
		}
		size_dest -= ft_strlen(sep);
	}
	return (size_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		h;

	if (!(dest = malloc(sizeof(char) * (1 + ft_strlendes(size, strs, sep)))))
		return (NULL);
	i = -1;
	h = 0;
	while (++i < size - 1)
	{
		j = -1;
		while (strs[i][++j])
			dest[h++] = strs[i][j];
		j = -1;
		while (sep[++j])
			dest[h++] = sep[j];
	}
	j = -1;
	while (strs[i][++j] && size > 0)
		dest[h++] = strs[i][j];
	dest[h] = '\0';
	return (dest);
}
