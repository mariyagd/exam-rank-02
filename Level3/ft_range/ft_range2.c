#include <stdlib.h>

int	ft_count_array(int	start, int	end)
{

	int	count;

	count = 0;
	if (start > end)
	{
		while (end <= start)
		{
			end++;
			count++;
		}
	}
	else if (start < end)
	{
		while (end >= start)  
		{
			end--;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}


int     *ft_range(int start, int end)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	size = ft_count(start, end);
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return 0;
	if (start > end)
	{
		while (start - i >= end)
		{
			array[i] = start - i;
			i++;
		}
	}
	else if (start < end)
	{
		while (start + i <= end)
		{
			array[i] = start + i;
			i++;
		}
	}
	else
		array[i] = start;
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

