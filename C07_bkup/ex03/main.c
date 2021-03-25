#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char *strtab[] = {"Emilie", "est", "la", "plus", "belle"};
	char *dest;

	dest = ft_strjoin(-1, strtab, " <3 ");
	printf("%s", dest);
	free(dest);
	return (0);
}
