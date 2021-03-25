/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:03:00 by esivre            #+#    #+#             */
/*   Updated: 2021/03/16 14:42:46 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int i;
	int len_fd;

	len_fd = 0;
	while (to_find[len_fd])
		len_fd++;
	if (len_fd == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (j == len_fd)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
