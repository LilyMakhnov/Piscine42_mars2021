#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "totobla";
	char	src[] = "bla";
	int nb = 10;
	int j = 0;
	while (dest[j])
	{
			j++;
	}
	printf("\n%d\n", j);
	int i = strlcat(dest, src, nb);
	j = 0;
	while (dest[j])
	{
		write(1, &dest[j], 1);
		j++;
	}

	printf("\n%d\n", j);
	printf("\n%d\n", i);
	char	dest2[20] = "totobla";
	char	src2[] = "bla";
	j = 0;
	while (dest2[j])
	{
		j++;
	}
	printf("\n%d\n", j);

	i = 0;
	i = ft_strlcat(dest2, src2, nb);
	j = 0;
	while (dest2[j])
	{
		write(1, &dest2[j], 1);
		j++;
	}
	printf("\ntaille output:");
	printf("\n%d\n", j);
	printf("int output:");
	printf("\n%d\n", i);

	return (0);
}
