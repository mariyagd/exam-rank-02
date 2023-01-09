int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] > '0' && str[i] < '9')
	{
		result = (10 * result) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("%d\n",ft_atoi(av[1]));
		printf("%d\n",atoi(av[1]));
	}
	else
		printf("\n");
	return (0);
}
*/
