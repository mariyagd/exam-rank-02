#include <unistd.h>

void	ft_putnbr(int a)
{
	char c;

	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	if (a >= 0 && a <= 9)
	{
		c = a + 48;
		write(1, &c, 1);
	}
}

int	main(int ac, char *av[])
{
	(void)av;

	ac = ac - 1;
	ft_putnbr(ac);
	write(1, "\n", 1);
	return (0);
}

/*
int	main(int ac, char *av[])
{
	size_t	i;

	if (ac > 1)
	{
		i = 1;
		while (av[i])
			i++;
		i = i - 1;
		ft_putnbr(i);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
*/
