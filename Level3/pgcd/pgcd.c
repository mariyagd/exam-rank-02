#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	a;
	int	b;
	int	i;
	int	result;

	i = 2;
	result = 1;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);

		while (i <= a || i <= b)
		{
			if (a % i == 0 && b % i == 0)
				result = i;
			i++;
		}
		printf("%d\n", result);
	}
	else
		printf("\n");
	return (0);
}


