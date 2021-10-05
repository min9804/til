#include "list.h"
#include <unistd.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	t;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != 0)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			t = lst->data;
			lst->data = lst->next->data;
			lst->nest->data = t;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
