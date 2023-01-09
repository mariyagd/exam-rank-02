char	*ft_strchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(s2, s1[i]) != 0)
		{
			return ((char *) &s1[i]);
		}
		++i;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc != 3)
		printf("\n");
	printf("%s\n", strpbrk(argv[1], argv[2]));
	printf("%s\n", ft_strpbrk(argv[1], argv[2]));
	return (0);
}*/
