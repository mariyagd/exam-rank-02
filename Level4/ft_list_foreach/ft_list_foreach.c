#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*ptr;

	ptr = begin_list;
	if (!begin_list)
		return ;
	while (ptr != NULL)
	{
		(*f)(ptr->data);
		ptr = ptr->next;
	}


