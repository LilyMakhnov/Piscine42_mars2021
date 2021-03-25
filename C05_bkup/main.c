#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_ten_queens_puzzle(void);

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	printf("%d\n", ft_fibonacci(atoi(argv[1])));
	printf("%d\n", ft_sqrt(atoi(argv[1])));
	printf("%d\n", ft_is_prime(atoi(argv[1])));
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
//	ft_ten_queens_puzzle(void);
	return 0;
}
