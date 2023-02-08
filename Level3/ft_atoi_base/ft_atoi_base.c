
int	ft_strlen_int(const char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
		i++;
	return (i);
}

int	power(int str_base, int power)
{
	int	result;

	result = 1;
	if (power < 0 || str_base == 0)
	{
		return (0);
	}
	while (power > 0)
	{
		result = result * str_base;
		power--;
	}
	return (result);
}

// test power function
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		printf("%d\n", power(atoi(av[1]), atoi(av[2])));
	}
	return (0);
}
*/

int	transform(char c)
{
	int		i;
	char	c2;

	i = 10;
	if (c >= 'A' && c <= 'F')
		c2 = 'A';
	if ( c >= 'a' && c <= 'f')
		c2 = 'a';
	while (c != c2)
	{
		c2++;
		i++;
	}
	return (i);
}

// test transform funciton
/*
#include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("%d\n", transform(av[1][0]));
	}
	return (0);
}
*/

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	count;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	count = ft_strlen_int(str) - 1;
	sign = 1;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
		count--;
	}
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result + (str[i] - '0')* power(str_base, count);
		}
		if ((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f'))
		{
			result = result + transform(str[i])*power(str_base, count);
		}
		i++;
		count--;

	}
	return (result * sign);
}


#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
		printf("%d\n", ft_atoi_base("-569", 16));
		printf("%d\n", ft_atoi_base("13", 8));
	return (0);
}

