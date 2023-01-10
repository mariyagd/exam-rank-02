int	is_power_of_2(unsigned int n)
{
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac != 2)
		printf("\n");
	else
		printf("%d\n", is_power_of_2(atoi(av[1])));
	return (0);
}
*/
