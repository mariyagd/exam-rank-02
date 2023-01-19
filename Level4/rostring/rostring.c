#include <unistd.h>

void	ft_rostring(char *str)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	if (!str)
		return ;
	while ((str[i] == 32 || str[i] == 9) && str[i] != 0)
		i++;
	if (str[i] == 0)
		return ;
	start = i;
	while (str[i] != 32 && str[i] != 9 && str[i] != 0)
		i++;
	end = i;
	while (str[i] != 0)
	{
		while ((str[i] == 32 || str[i] == 9) && str[i] != 0)
			i++;
		while (str[i] != 32 && str[i] != 9 && str[i] != 0)
		{
			write(1, &str[i], 1);
			i++;
		}
		write (1, " ", 1);
	}
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int ac, char *av[])
{
	(void)ac;
	ft_rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}

