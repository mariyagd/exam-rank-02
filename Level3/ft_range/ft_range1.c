#include <stdlib.h>

int	ft_count_array(int start, int end)
{
	int	count;

	count = 1;

	count = (start > end) ? start - end + 1 : end - start + 1;
	return (count);
}


int     *ft_range(int start, int end)
{
	int	size;
	int	*array;
	int	i;

	i = 0;
	size = ft_count_array(start, end);
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = (start <= end) ? start + i : start - i;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>
int	main(int ac, char *av[])
{
	int	start;
	int	end;
	int	*array;
	int	size;
	int	i;

	i = 0;

	if (ac == 3)
	{
		start = atoi(av[1]);
		end = atoi(av[2]);
		array = ft_range(start, end);
		size = ft_count_array(start, end);
		printf("ft_count = %d\n", size);
		while (i < size)
		{
			printf("%d\n", array[i]);
			i++;
		}
	}
	return (0);
}
*/

