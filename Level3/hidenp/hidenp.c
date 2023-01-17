#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	if (ac == 3)
	{
		size = ft_strlen(av[1]);
		while (av[2][i] != 0)
		{
			if (av[1][j] == av[2][i])
				j++;
			i++;
		}
		if (j == size)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
		




