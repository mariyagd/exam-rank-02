void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int	swap;

	i = 0;
	j = 0;
	if (size == 1 || size == 0)
		return ;
	while (i < size - 2)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	unsigned int	i = 0;
	unsigned int	size = 15;
	int tab[15] = {534, -1243435, 4223, 78, -6, 2357, -564, -6544782, 6654752, 2421, 3, 1, -64578213, 65478213, 32442};
	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}



