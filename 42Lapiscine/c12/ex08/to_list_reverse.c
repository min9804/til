#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *tmp;

	list = NULL;
	while (*begin_list)
	{
		tmp = (*begin_list)->next;
		(*begin_list)->next = list;
		list = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = list;
}
