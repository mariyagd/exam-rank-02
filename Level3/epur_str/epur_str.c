#include <unistd.h>

int	main(int ac, char *av[])
{
	size_t	i;

	i = 0;
	if (ac == 2)
	{
		while ((av[1][i] == 32 || av[1][i] == 9) && av[1][i] != 0)
			i++;
		while (av[1][i] != 0)
		{
			if (av[1][i] >= 33 && av[1][i] <= 126)
			{
				write(1, &av[1][i], 1);
				i++;
			}
			if (av[1][i] == 32 || av[1][i] == 9)
			{
				while (av[1][i] == 32 || av[1][i] == 9)
					i++;
				if (av[1][i] != 0)
					write(1, " ", 1);
			}
		}

	}
	write(1, "\n", 1);
	return (0);
}
