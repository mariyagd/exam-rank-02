#include <stddef.h>
#include <unistd.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[2][i] != '\0')
		{
			if (av[2][i] == av[1][j])
				j++;
			i++;
		}
		if (j == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
