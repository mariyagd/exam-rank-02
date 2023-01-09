#include <stddef.h>
char	*ft_strchr(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) != 0)
		{
			count++;
			i++;
		}
		else
			break;
	}
	return (count);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char *av[])
{
	if (ac != 3)
		printf("\n");
	else
	{
		printf("%zu\n", strspn(av[1], av[2]));
		printf("%zu\n", ft_strspn(av[1], av[2]));
	}
	return (0);
}*/
