#include <unistd.h>

int	isprime(int a)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i <= a)
	{
		if (a % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}

// test isprime
/*
#include <stdio.h>
int	main(void)
{
	int	a;

	a = 1;
	printf("%d\n", isprime(a));

	a = 3;
	printf("%d\n", isprime(a));

	a = 9;
	printf("%d\n", isprime(a));

	a = 7;
	printf("%d\n", isprime(a));
	return (0);
}
*/

int	ft_atoi(const char	*s)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (((s[i] >= 9 && s[i] <= 13) || s[i] == 32) && s[i] != '\0')
		i++;
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
	{
		sign *= (-1);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * sign);
}


// * ft_atoi test:
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("%d\n", ft_atoi(av[1]));
		printf("%d\n", atoi(av[1]));
	}
	return (0);
}
*/


void	ft_putnbr(int a)
{
	char	result;

	if (a == -2147483648)
	{
		write(1, "-2", 2);
		a = 147483648;
	}
	if (a < 0)
	{
		write(1, "-", 1);
		a *= (-1);
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	if (a >= 0 && a <= 9)
	{
		result = a + '0';
		write(1, &result, 1);
	}
}

// ft_putnbr test
/*int	main(void)
{
	int	a;

	a = -546;
	ft_putnbr(a);
	return (0);
}*/


#include <stdlib.h>
int	main(int ac, char *av[])
{
	int	a;
	int	result;

	result = 0;
	if (ac == 2)
	{
		a = ft_atoi(av[1]);
		while (a >= 0)
		{
			if (isprime(a) == 1)
				result += a;
			a--;
		}
		ft_putnbr(result);
	}
	write(1, "\n", 1);
	return (0);
}
