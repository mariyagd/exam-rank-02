#include <unistd.h>

int	main(int argc, char *argv[])
{
		int		i;
		char	c;

		i = 0;
		if (argc != 2)
				write(1, "\n", 1);
		else
		{
						while (argv[1][i] != '\0')
						{
								if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
								{
												c = argv[1][i] + 13;
												write(1, &c, 1);
								}
								else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
								{
												c = argv[1][i] + 13;
												write(1, &c, 1);
								}
								else if (argv[1][i] <= 'z' && argv[1][i] >= 'n')
								{
												c = argv[1][i] - 13;
												write(1, &c, 1);
								}
								else if (argv[1][i] <= 'Z' && argv[1][i] >='N')
								{
												c = argv[1][i] - 13;
												write(1, &c, 1);
								}
								else
												write(1, &argv[1][i], 1);
								i++;
						}
						write(1, "\n", 1);
		}
		return (0);
}

