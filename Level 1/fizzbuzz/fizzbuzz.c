#include "unistd.h"

void	putnbr(int i)
{
	char	a;
	char	b;

	if (i < 10)
	{
			a = i + 48;
			write(1, &a, 1);
	}
	else
	{
			a = i / 10;
			b = a + 48;
			write (1, &b, 1);
			a = i - a*10;
			a = a + 48;
			write(1, &a, 1);
	}
}



int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i <= 100)
	{
			if (i % 3 == 0)
					write (1, "fizz", 4);
			else if (i % 5 == 0)
					write (1, "buzz", 4);
			else if (i % 5 == 0 && i % 3 == 0)
					write (1, "fizzbuzz", 8);
			else
					putnbr(i);
					write(1, "\n", 1);

			i++;
	}
	return (0);
}

	
