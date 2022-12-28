#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	a;
	int	b;
	int	c;

	if (ac != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	c = 0;
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (av[2][0] == '*')
		c = a * b;
	else if (av[2][0] == '/')
		c = a / b;
	else if (av[2][0] == '+')
		c = a + b;
	else if (av[2][0] == '-')
		c = a - b;
	printf ("%d\n", c);
	return (0);
}




