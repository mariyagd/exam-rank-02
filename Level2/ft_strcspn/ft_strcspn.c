#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (reject[i] != '\0')
		{
			if (s[j] == reject[i])
				return (j);
			else
				i++;
		}
		j++;
	}
	return (j);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char *av[])
{
	if (ac != 3)
		printf("\n");
	printf("strcspn = %zu\n", strcspn(av[1], av[2]));
	printf("ft_strcspn = %zu\n", ft_strcspn(av[1], av[2]));
	return(0);
}*/
