#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	size = 1;
	size = (start < end) ? end - start + 1 : start - end + 1;
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = start <= end ? end - i : end + i;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>
int	main(int ac, char *av[])
{
	int	i;
	int	*array;
	int	start;
	int	end;
	int	size;

	i = 0;
	if (ac == 3)
	{
		start = atoi(av[1]);
		end = atoi(av[2]);
		size = 1;
		size = (start < end) ? end - start + 1 : start - end + 1;
		printf("size = %d\n", size);
		array = ft_rrange(start, end);
		while (i < size)
		{
			printf("%d\n", array[i]);
			i++;
		}
	}
	return (0);
}
*/		



