#include <unistd.h> 

int	ft_count(char c)
{
	char	start;
	char	START;
	int	i;

	start = 'a';
	START = 'A';
	i = 1;
	if (c >= 'a' && c <= 'z')
	{
		while(start <= 'z')
		{
			if (start == c)
				return (i);
			start += 1;
			i++;
		}
	}
	else if (c >= 'A' && c <= 'Z')
	{
		while(START != 'Z')
		{
			if (START == c)
				return (i);
			START += 1;
			i++;
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	count;
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			count = ft_count(argv[1][i]);
			if (count == 0)
				write(1, &argv[1][i], 1);
			while (count > 0)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}





