#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int argc, char **argv)
{
	char	**result;
	int		i;

	(void)argc;
	i = 0;
	result = ft_split(argv[1], argv[2]);
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
}
