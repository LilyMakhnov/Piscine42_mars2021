/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:10:12 by esivre            #+#    #+#             */
/*   Updated: 2021/03/24 11:25:03 by esivre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_in_char(char a, char *charset)
{
	while (*charset)
	{
		if (*charset == a)
			return (1);
		charset++;
	}
	return (0);
}

int		ft_count_word(char *str, char *charset)
{
	int wordscount;
	int inword;
	int i;

	i = -1;
	wordscount = 0;
	inword = 0;
	while (str[++i])
	{
		if (is_in_char(str[i], charset))
			inword = 0;
		else if (inword == 0)
		{
			wordscount++;
			inword = 1;
		}
	}
	return (wordscount);
}

int		size_w(int *i, char *str, char *charset)
{
	int j;
	int p;

	p = *i;
	j = 0;
	while (is_in_char(str[p], charset) == 1)
		p++;
	while (is_in_char(str[p], charset) == 0)
	{
		j++;
		p++;
	}
	*i = p;
	return (j);
}

void	ft_copy(char *dest, int *i, char *str, char *charset)
{
	int p;
	int j;

	p = *i;
	j = 0;
	while (is_in_char(str[p], charset) == 1)
		p++;
	while (is_in_char(str[p], charset) == 0)
	{
		dest[j++] = str[p];
		p++;
	}
	*i = p;
	dest[j++] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		pos;
	int		i;
	int		size_word;

	if (!(dest = malloc(sizeof(char*) * (ft_count_word(str, charset) + 1))))
		return (NULL);
	i = 0;
	pos = 0;
	while (i < ft_count_word(str, charset))
	{
		size_word = size_w(&pos, str, charset);
		dest[i] = malloc(sizeof(char)
				* (size_word) + 1);
		if (!dest[i])
			return (NULL);
		i++;
	}
	i = 0;
	pos = 0;
	while (i < ft_count_word(str, charset))
		ft_copy(dest[i++], &pos, str, charset);
	dest[i] = 0;
	return (dest);
}
