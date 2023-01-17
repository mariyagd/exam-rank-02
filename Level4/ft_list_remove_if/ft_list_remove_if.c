#include <stdlib.h>
#include "libft.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ptr;
	t_list	*tmp;

	tmp = *begin_list;
	while (*begin_list != NULL && cmp(*begin_list->content, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = *begin_list->next;
		free(tmp);
	}
	tmp = *begin_list;
	ptr = *begin_list;
	while (ptr != NULL)
	{
		if(cmp(*ptr->content, data_ref) == 0)
		{
			tmp = ptr;
			ptr = ptr->next;
			free(tmp);
		}
		else
			ptr = ptr->next;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	t_list *lst;
	int i = 1;
	int j = 2;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->content = &j;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->content = &j;
	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->content = &i;
	lst->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->content = &i;
	lst->next->next->next->next =  NULL;

	t_list	*ptr;
	ptr = lst;
	while (ptr != NULL)
	{
		printf("%d\n", *ptr->content);
		ptr = ptr->next;
	}
	return (0);
}
*/


				



