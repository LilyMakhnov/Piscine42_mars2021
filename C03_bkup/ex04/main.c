#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str [] = "machaineteste";
	char tofind [] = "";
	char *ptr;
	int i;
	
	i = 0;
	ptr = ft_strstr(str, tofind);
	while (ptr[i])
	{
		write(1, &ptr[i], 1);
		i++;
	}
	return (0);
}
