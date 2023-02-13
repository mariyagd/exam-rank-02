#include <unistd.h>

void	ft_put_hexanbr(unsigned int	n)
{
	if (n > 15)
	{
		ft_put_hexanbr(n / 16);
		ft_put_hexanbr(n % 16);
	}
	else if (n < 10)
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

unsigned int	ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;

	if (str[i] == '+')
		i++;
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
		unsigned int n = ft_atoi(av[1]);
		ft_put_hexanbr(n);
	}
	write(1, "\n", 1);
	return (0);
}
