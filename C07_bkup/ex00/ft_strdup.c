/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:16:51 by esivre            #+#    #+#             */
/*   Updated: 2021/03/24 12:24:51 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_stdrup(char *src)
{
	int		i;
	char	*ret;

	i = 0;
	while (src[i])
		i++;
	if (!(ret = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (src[++i])
		ret[i] = src[i];
	ret[i + 1] = '\0';
	return (ret);
}
