int	max(int* tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>
int	main(void)
{
	int	tab[5] = {2, 6, 8, 3};
	printf("%d\n", max(tab, 0));
	return (0);
}


