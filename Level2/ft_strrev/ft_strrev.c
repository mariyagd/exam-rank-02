#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	char *p1;
	char *p2;
	char tmp;

	p1 = &str[0];
	p2 = &str[ft_strlen(str) - 1];

	while (p1 < p2)
	{
		tmp = *p2;
		*p2 = *p1;
		*p1 = tmp;
		++p1;
		--p2;
	}
	return str;
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("\n");
	printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
*/

