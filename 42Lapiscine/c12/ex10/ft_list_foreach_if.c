#include "ft_list.h"

void	ft_list_foreach_if(t_list *befin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (!cmp(bigin_list->data, data_refa))
			f(bigin_list->data);
		begin_list = begin_list->next;
	}
}
