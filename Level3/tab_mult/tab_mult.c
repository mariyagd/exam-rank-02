#include <unistd.h>

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

int	main(int ac, char *av[])
{
	int	a;
	int	i;
	int	res;

	i = 1;
	if (ac == 2)
	{
		a = ft_atoi(av[1]);
		while (i <= 9)
		{
			res = a * i;
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(a);
			write(1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else 
		write(1, "\n", 1);
	return (0);
}


