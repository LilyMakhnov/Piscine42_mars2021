/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:15:24 by esivre            #+#    #+#             */
/*   Updated: 2021/03/18 07:15:08 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_charsize(char *a)
{
	int i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int size_src;

	size_src = ft_charsize(src);
	i = 0;
	while (i < size_src && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (size_src);
}
