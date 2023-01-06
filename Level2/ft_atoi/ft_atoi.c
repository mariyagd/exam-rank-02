int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		else
			break;
	}
	return (result);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	printf("ft_atoi = %d\n", ft_atoi(av[1]));
	printf("atoi = %d\n", atoi(av[1]));
	return (0);
}

