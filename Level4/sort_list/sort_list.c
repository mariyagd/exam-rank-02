#include "libft.h"

int cmp(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*ptr;
	int	swap;

	if (!lst)
		return NULL;
	ptr = lst;
	while (ptr->next != NULL)
	{
		if (cmp(*(int *)ptr->content, *(int *)ptr->next->content) == 0)
		{
			swap = *(int *)ptr->content;
			*(int *)ptr->content = *(int *)ptr->next->content;
			*(int *)ptr->next->content = swap;
			ptr = lst;
		}
		else
			ptr = ptr->next;
	}
	return (lst);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char *av[])
{
	(void)ac;
	(void)av;
	int	a1 = atoi(av[1]);
	int	a2 = atoi(av[2]);
	int	a3 = atoi(av[3]);
	int	a4 = atoi(av[4]);
	int	a5 = atoi(av[5]);
	int	a6 = atoi(av[6]);
	int	a7 = atoi(av[7]);
	int	a8 = atoi(av[8]);
	int	a9 = atoi(av[9]);
	int	a10 =atoi(av[10]);

	t_list *lst = malloc(sizeof(t_list) * 1);
	lst->content = &a1;
	lst->next = malloc(sizeof(t_list) * 1);
	lst->next->content = &a2;
	lst->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->content = &a3;
	lst->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->content = &a4;
	lst->next->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->next->content = &a5;
	lst->next->next->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->next->next->content = &a6;
	lst->next->next->next->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->next->next->next->content = &a7;
	lst->next->next->next->next->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->next->next->next->next->content = &a8;
	lst->next->next->next->next->next->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->next->next->next->next->next->content = &a9;
	lst->next->next->next->next->next->next->next->next->next = malloc(sizeof(t_list) * 1);
	lst->next->next->next->next->next->next->next->next->next->content = &a10;
	lst->next->next->next->next->next->next->next->next->next->next = NULL;

	//check if the listis linked
	t_list	*ptr;
	ptr = lst;
	printf("\nlinked list creation check:");
	while(ptr != NULL)
	{
		printf("%d ", *(int *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n\ncmp function check if a1 = %d is smaller or equal to a2 = %d result = %d\n", *(int *)lst->content, *(int *)lst->next->content, cmp(a1, a2));
	printf("cmp function check if a2 = %d is smaller or equal to a1 = %d result = %d\n", *(int *)lst->content, *(int *)lst->next->content, cmp(a2, a1));

	lst = sort_list(lst, cmp);
	ptr = lst;
	printf ("\nsort_list function for linked list with 10 elements result = ");
	while (ptr != NULL)
	{
		printf("%d ", *(int *)ptr->content);
		ptr = ptr->next;
	}

	// check if lst is NULL
	t_list	*lst1 = NULL;
	t_list	*ptr1;
	lst1 = sort_list(lst1, cmp);

	ptr1 = lst1;
	printf ("\nsort_list function for a lst = NULL (result should show empty space) result = ");
	while (ptr1 != NULL)
	{
		printf("%d ", *(int *)ptr1->content);
		ptr1 = ptr1->next;
	}

	//check for linked list with only 1 element
	t_list *lst2 = malloc(sizeof(t_list) * 1);
	lst2->content = &a1;
	lst2->next = NULL;
	t_list	*ptr2;
	lst2 = sort_list(lst2, cmp);

	ptr2 = lst2;
	printf ("\nsort_list function with only one element result = ");
	while (ptr2 != NULL)
	{
		printf("%d ", *(int *)ptr2->content);
		ptr2 = ptr2->next;
	}
	return (0);
}
*/

