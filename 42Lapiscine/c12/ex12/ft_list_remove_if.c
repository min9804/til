#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *curr;
	t_list *n_list;

	curr = *begin_list;
	while (curr && curr->next)
	{
		if (!cmp(curr->next->data, data_ref))
		{
			n_list = curr->next;
			curr->next = curr->next->next;
			free_fct(n_list->data);
			free(n_list);
		}
		curr = curr->next;
	}
	curr = *begin_list;
	if (curr && !cmp(curr->data, data_ref))
	{
		*begin_list = curr->next;
		free_fct(curr->data);
		free(curr);
	}
}
