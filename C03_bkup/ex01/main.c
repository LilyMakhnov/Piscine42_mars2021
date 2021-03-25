#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[10] = "test";
	char	src[] = "tat";
	int nb = 2;
	int i = strncmp(dest, src, nb);
	int j = 0;
	while (dest[j])
	{
		write(1, &dest[j], 1);
		j++;
	}

	printf("\n%d\n", j);
	printf("\n%d\n", i);
	char	dest2[7] = "test";
	char	src2[] = "tat";

	i = ft_strncmp(dest2, src2, nb);
	j = 0;
	while (dest2[j])
	{
		write(1, &dest2[j], 1);
		j++;
	}
	printf("\n%d\n", j);
	printf("\n%d\n", i);

	return (0);
}
