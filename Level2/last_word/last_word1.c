#include <stddef.h>
#include <unistd.h>
/*
 * A corriger cas "" ne marche pas
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char *av[])
{
	size_t	i;
	size_t	end;

	i = 0;
	end = 0;
	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;
		while ((av[1][i] == 32 || av[1][i] == 9) && i >= 0)
			i--;
		end = i;
		while ((av[1][i] >= 33 && av[1][i] <= 126) && i >= 0)
			i--;
		i++;
		while (i <= end)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
