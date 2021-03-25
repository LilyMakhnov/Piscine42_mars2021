#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[11] = "test";
	char	src[] = "mychar";

	strcat(dest, src);
	int j = 0;
	while (dest[j])
	{
		write(1, &dest[j], 1);
		j++;
	}

	printf("\n%d\n", j);
//	printf("\n%d\n", i);
	char	dest2[11] = "test";
	char	src2[] = "mychar";

	ft_strcat(dest2, src2);
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
