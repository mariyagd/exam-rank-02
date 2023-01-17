#include <unistd.h>

void	ft_put_hexanbr(int	n)
{
	if (n > 15)
	{
		ft_put_hexanbr(n / 16);
		ft_put_hexanbr(n % 16);
	}
	if (n < 10)
	{
		n = n + 48;
		write(1, &n, 1);
	}
	else if (n > 9 && n < 16)
	{
		n = n + 87;
		write(1, &n, 1);
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
	if (ac == 2)
	{
		int	n = ft_atoi(av[1]);
		ft_put_hexanbr(n);
	}
	write(1, "\n", 1);
	return (0);
}
