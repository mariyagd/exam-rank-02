#include <stddef.h>
#include <unistd.h>

int	main(int ac, char *av[])
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if((av[1][i] == 32 || av[1][i] == 9) && \
					(av[1][i + 1] >= 33 && av[1][i + 1] <= 126))
				j = i + 1;
			i++;
		}
		while (av[1][j] >= 33 && av[1][j] <= 126)
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
