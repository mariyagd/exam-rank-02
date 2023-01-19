#include <unistd.h>

// question pour ce qui en commentaire - est ce que !str == str[end] == 0
void	ft_rev(char *str)
{
	int	end = 0;
	int start = 0;

	if (!str)
		return ;
//	if (str[end] == 0)
//		return ;
	while (str[end] != 0)
		end++;
	end--;
	while (end >= 0)
	{
		while (str[end] == 32 || str[end] == 9) 
		{
			write(1, &str[end], 1);
			if (end == 0)
				break;
			end--;
		}
		if (end == 0 && (str[end] == 32 || str[end] == 9))
			break;
		start = end;
		while (str[start] != 32 && str[start] != 9 && start >= 0)
		{
			start--;
		}
		end = start;
		start++;
		while (str[start] != 32 && str[start] != 9 && str[start] != 0)
		{
			write(1, &str[start], 1);
			start++;
		}
	}

}

int	main(int ac, char *av[])
{
	(void)av;
	if (ac == 2)
	{
		ft_rev(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}

