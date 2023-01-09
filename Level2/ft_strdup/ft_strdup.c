#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	i = 0;
	while (src[i] != '\0')
		i++;
	result = (char *)malloc( (i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("\n");
	char	*result;
	char	*result1;
	result1 = ft_strdup(argv[1]);
	result = strdup(argv[1]);
	printf("strdup = %s\n", result);
	printf("ft_strdup = %s\n", result1);
	printf("length argv = %lu\n", strlen(argv[1]));
	printf("length strdup = %lu\n", strlen(result));
	printf("length ft_strdup = %lu\n", strlen(result1));
	return (0);
}
*/
