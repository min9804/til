#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *ptr;

	ptr = *begin_list1;
	if (!ptr)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (ptr->next)
		ptr = ptr->next;
	prt->next = begin_list2;
}
