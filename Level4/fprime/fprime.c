#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	int	a;
	int	p;

	p = 2;
	if (ac == 2)
	{
		a = atoi(av[1]);
		if (a == 1)
		{
			printf("%d\n", a);
			return (0);
		}
		while (p <= a) 
		{
			while (a % p == 0 && a > 1) 
			{
				a = a / p;
				if (a != 1)
					printf("%d*", p);
				if (a == 1)
					printf("%d", p);
			}
			p++;
		}
	}
	printf("\n");
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	i;
	int	number;

	if (argc == 2)
	{
		i = 1;
		number = atoi(argv[1]);
		if (number == 1)
			printf("1");
		while (number >= ++i)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
*/
			


		

