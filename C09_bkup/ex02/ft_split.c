#include <stdlib.h>
#include <stdio.h>

int		count_word(char *str, char *charset);
void	ft_copy(char *dest, int *i, char *str, char *charset);
int		sizeword(int *i, char *str, char *charset);
char	**ft_split(char *str, char *charset);
int		is_in(char a, char *charset);

void	ft_copy(char *dest, int *i, char *str, char *charset)
{
	int j;
	int p;

	p = *i;
	j = 0;
	while (is_in(str[p], charset) == 1 && str[p])
		p++;
	while (is_in(str[p], charset) == 0 && str[p])
	{
		dest[j] = str[p];
		p++;
		j++;
	}
	*i = p;
	dest[j] = 0;
}

int		sizeword(int *i, char *str, char *charset)
{
	int j;
	int p;

	p = *i;
	j = 0;
	while (is_in(str[p], charset) == 1 && str[p])
		p++;
	while (is_in(str[p], charset) == 0 && str[p])
	{
		p++;
		j++;
	}
	*i = p;
	return j;
}

char	**ft_split(char *str, char *charset)
{
	int size;
	char **dest;
	int i;
	int pos;

	size = count_word(str, charset);
	if (!(dest = malloc(sizeof(char*) * (size + 1))))
		return NULL;

	i = 0;
	pos = 0;
	while (i < size)
	{
		dest[i] = malloc(sizeof(char) * (sizeword(&pos, str, charset) + 1));
		if (!dest[i])	
			return NULL;
		i++;
	}
	i = 0;
	pos = 0;
	while (i < size)
		ft_copy(dest[i++], &pos, str, charset);		
	dest[size] = 0;
	return dest;
//	return NULL;
}

int		is_in(char a, char *charset)
{
	int i;

	i = 0;
	while (*charset)
	{
		if (a == *charset)
			return 1;
		charset++;
	}
	return 0;
}

int		count_word(char *str, char *charset)
{
	int i;
	int isword;
	int countword;

	i = 0;
	isword = 0;
	countword = 0;
	while (str[i++])
	{
		if (is_in(str[i], charset) == 0 && isword == 0)
		{
			isword = 1;
			countword++;
		}
		if (is_in(str[i], charset) == 1)
			isword = 0;
	}
	return countword;
}




int main()
{
	char **tab;
	int i;

	i = 0;
	tab = ft_split("salut ca va biem", "");
	while (tab[i])
		printf("%s\n", tab[i++]);
//	printf("%d", count_word(" salut ca va bien", " "));
	free(tab);
}
