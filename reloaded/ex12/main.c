#include <stdio.h>
int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = argv[1][0] - '0';
		printf("%d\n", ft_iterative_factorial(nbr));
	}
	if (argc == 1)
		printf("%d\n", ft_iterative_factorial(12));
	return(0);
}
