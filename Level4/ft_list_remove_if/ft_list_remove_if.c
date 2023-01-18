#include <stdlib.h>
#include "libft.h"

int	cmp(int *a, int *b)
{
	if (*a == *b)
		return (0);
	else
		return(1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ptr;
	t_list	*tmp;
	int	flag = 0;


	tmp = *begin_list;
	
	while (*begin_list != NULL && cmp((*begin_list)->content, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	tmp = *begin_list;
	ptr = *begin_list;
	while (ptr != NULL)
	{
		if(cmp(ptr->content, data_ref) == 0)
		{
			tmp->next = ptr->next;
			free(ptr);
			ptr = tmp;
			flag = 0;
		}
		if (flag > 0)
			tmp = tmp->next;
		if (ptr != NULL)
			ptr = ptr->next;
		flag = 1;
	}

}
/*
#include <stdio.h>
int	main(int ac, char *av[])
{
	if (ac == 12)
	{
		// 10 contents of type int are created with atoi function
		int	nbr1 = atoi(av[1]);
		int	nbr2 = atoi(av[2]);
		int	nbr3 = atoi(av[3]);
		int	nbr4 = atoi(av[4]);
		int	nbr5 = atoi(av[5]);
		int	nbr6 = atoi(av[6]);
		int	nbr7 = atoi(av[7]);
		int	nbr8 = atoi(av[8]);
		int	nbr9 = atoi(av[9]);
		int	nbr10 = atoi(av[10]);

		// the value to be compared is created with atoi function
		int	nbr_cmp = atoi(av[11]);


		// each node is created with ft_lstnew function
		t_list	*node1 = ft_lstnew(&nbr1);
		t_list	*node2 = ft_lstnew(&nbr2);
		t_list	*node3 = ft_lstnew(&nbr3);
		t_list	*node4 = ft_lstnew(&nbr4);
		t_list	*node5 = ft_lstnew(&nbr5);
		t_list	*node6 = ft_lstnew(&nbr6);
		t_list	*node7 = ft_lstnew(&nbr7);
		t_list	*node8 = ft_lstnew(&nbr8);
		t_list	*node9 = ft_lstnew(&nbr9);
		t_list	*node10 = ft_lstnew(&nbr10);

		// the linked list is created with ft_lstadd_back
		ft_lstadd_back(&node1, node2);
		ft_lstadd_back(&node1, node3);
		ft_lstadd_back(&node1, node4);
		ft_lstadd_back(&node1, node5);
		ft_lstadd_back(&node1, node6);
		ft_lstadd_back(&node1, node7);
		ft_lstadd_back(&node1, node8);
		ft_lstadd_back(&node1, node9);
		ft_lstadd_back(&node1, node10);


		// Check if the linked list was indeed created 
		// by printing each content of each element
		t_list	*ptr;
		ptr = node1;
		int	i = 1;
		while (ptr != NULL)
		{
			printf("element[%d] = %d\n", i, *(int *)ptr->content);
			ptr = ptr->next;
			i++;
		}

		// Call the ft_list_remove_if function
		ft_list_remove_if(&node1, &nbr_cmp, cmp);
		
		// Check if the ft_list_remove_if function works 
		// by printing each content of the new linked list
		ptr = node1;
		i = 1;
		while (ptr != NULL)
		{
			printf("result[%d] = %d\n", i, *(int*)ptr->content);
			ptr = ptr->next;
			i++;
		}
	}
	else
		printf("Please enter 10 values for node creation and 1 value to be compared. Values must be representable as integers.");
	return (0);
}
*/
