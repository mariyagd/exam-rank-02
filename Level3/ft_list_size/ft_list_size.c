#include "ft_list.h"
#include <stddef.h>

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;

	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

//  test

/*
#include <stdio.h>
#include <stdlib.h>
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstlast;

	if (*lst == NULL)
		*lst = new;
	else if (!lst || !new)
		return ;
	else
	{
		lstlast = ft_lstlast(*lst);
		lstlast->next = new;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->next = NULL;
	lstnew->data = (void *)content;
	return (lstnew);
}

int	main(void)
{
	char *str0  = "hello";
	char *str1  = " kitty";
	char *str2 = " !";
	t_list *head = ft_lstnew(str0);
	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	printf("%d\n", ft_list_size(head));
	return(0);
}
*/

