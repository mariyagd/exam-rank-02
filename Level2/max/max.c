int	max(int* tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	max = 0;
	if (len > 0)
	{
		max = tab[i];
		i++;
	}
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[6] = {-2, -9, -10, -6, -8, -3};
	printf("%d\n", max(tab, 6));
	return (0);
}*/


