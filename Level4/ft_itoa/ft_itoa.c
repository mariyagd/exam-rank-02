#include <stdlib.h>

int	count(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		count++;
	if (nbr < 0)
		count++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		size;
	char	*str;
	int 	start;

	start = 0;
	size = count(nbr);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		start = 2;
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		str[0] = '-';
		start = 1;
		nbr *= -1;
	}
	str[size] = '\0';
	while (size - 1 >= start && nbr >= 0 )
	{
		str[size - 1] = nbr % 10 + 48;
		nbr = nbr / 10;
		size--;
	}
	return (str);
}

/*
#include <string.h>
#include <stdio.h>
int	main(int ac, char *av[])
{
	int	nbr;
	char *result;
	int	i;

	i = 0;
	if (ac == 2)
	{
		nbr = atoi(av[1]);
		result = ft_itoa(nbr);
		printf("%s\n", result);
		while (result[i] != '\0')
		{
			printf("%c\n", result[i]);
			i++;
		}
		printf("%c\n", result[i]);
	}
	printf("strlen = %zu\n", strlen(result));
	return (0);
}
*/		
