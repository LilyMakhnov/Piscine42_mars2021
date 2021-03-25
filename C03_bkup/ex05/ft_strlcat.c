/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:04:28 by esivre            #+#    #+#             */
/*   Updated: 2021/03/18 14:18:16 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strlen(char *mychar)
{
	int i;

	i = 0;
	while (mychar[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_dest;
	unsigned int len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] && i + len_dest + 1 < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if (size < len_dest)
		return (len_src + size);
	else
		return (len_dest + len_src);
}
