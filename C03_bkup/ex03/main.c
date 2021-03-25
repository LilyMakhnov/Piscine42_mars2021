#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[15] = "test";
	char	src[] = "mychar";
	int nb = 10;
	strncat(dest, src, nb);
	int j = 0;
	while (dest[j])
	{
		write(1, &dest[j], 1);
		j++;
	}

	printf("\n%d\n", j);
//	printf("\n%d\n", i);
	char	dest2[15] = "test";
	char	src2[] = "mychar";

	ft_strncat(dest2, src2, nb);
	j = 0;
	while (dest2[j])
	{
		write(1, &dest2[j], 1);
		j++;
	}
	printf("\n%d\n", j);
//	printf("\n%d\n", i);

	return (0);
}
