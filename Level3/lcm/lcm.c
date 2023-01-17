unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	n = 1;
	if (!a || !b)
	{
		return (0);
	}
	n = (a > b) ? a : b;
	while (1)
	{
		if (n % a == 0 &&  n % b == 0) 
			return (n);
		n++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	unsigned int	a;
	unsigned int	b;

	if (ac == 3)
	{
		a = (unsigned int)atoi(av[1]);
		b = (unsigned int)atoi(av[2]);

		printf("%u\n", lcm(a, b));
	}
	return (0);
}
*/
