#include <unistd.h>
#include <stddef.h>

char	*ft_strnchr(const char *s, size_t j, char c)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}

char	*ft_strchr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
int	main(int ac, char *av[])
{
	size_t	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (ft_strnchr(av[1], i, av[1][i]) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (ft_strchr(av[1], av[2][i]) == 0 && ft_strnchr(av[2], i, av[2][i]) == 0)
				write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}




