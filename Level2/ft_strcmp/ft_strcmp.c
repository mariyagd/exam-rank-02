int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char *av[])
{
	if (ac != 3)
		printf("\n");
	printf("ft_strcmp = %d\n", ft_strcmp(av[1], av[2]));
	printf("printf = %d\n", strcmp(av[1], av[2]));
	return (0);
}
*/
