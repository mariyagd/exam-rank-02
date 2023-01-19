#include <stdlib.h>

size_t	ft_count_words(char *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] != 32 && str[i] != 10 && str[i] != 9 && str[i] != 0)
		{
			while (str[i] != 32 && str[i] != 10 && str[i] != 9 && str[i] != 0)
				i++;
			count++;
		}
		while ((str[i] == 32 || str[i] == 10 || str[i] == 9) && str[i] != 0)
			i++;
	}
	return (count);
}

char	*ft_fill_result(char *str)
{
	char	*result;
	size_t	i;

	i = 0;
	while (str[i] != 0 && str[i] != 32 && str[i] != 10 && str[i] != 9)
		i++;
	result = malloc((i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] != 0 && str[i] != 32 && str[i] != 10 && str[i] != 9)
	{
		result[i] = str[i];
		i++;
	}
	return (result);
}
// question pour str et pour protection et free result et static
char    **ft_split(char *str)
{
	size_t	size;
	size_t	i;
	char	**result;

	i = 0;
	size = ft_count_words(str);
	if (!str)
		return (NULL);
	result = (char **)malloc((size + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*str)
	{
		while ((*str == 32 || *str == 10 || *str == 9) && *str != 0)
			str++;
		if (*str != 0 && *str != 32 && *str != 10 && *str != 9)
		{
			result[i] = ft_fill_result(str);
			i++;
			while (*str != 32 && *str != 10 && *str != 9 && *str != 0)
				str++;
		}
	}
	result[i] = 0;
	return (result);
}

#include <stdio.h>
int	main(int ac, char *av[])
{
	char *str = av[1];
	char **result = ft_split(str);
	size_t	i = 0;

	if (ac == 2)
	{
		while (result[i] != 0)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}
	return (0);
}
