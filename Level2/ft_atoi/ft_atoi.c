#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign  = 1;
	while (str[i] != 0 && (str[i] == ' ' || str[i] == '\t' \
				|| str[i] == '\n' || str[i] == '\v' \
				|| str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = (str[i] - 48) + result;
		i++;
	}
	return (result * sign);
}


int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	char	*str = "\t\n\v\f\r +96";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));

	char	*str1 = "\t\n\v\f\r -96";
	printf("%d\n", atoi(str1));
	printf("%d\n", ft_atoi(str1));
	return (0);
}

