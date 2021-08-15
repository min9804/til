#include "ft_list.h"

void 	ft_lsit_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *prev;
	t_list *curr;

	prev = *begin_list; 
	curr = prev->next;
	while (curr && curr->next)
	{
		if (!cmp(curr->data, data_ref))
		{
			prev->next = curr->next;
			free_fct(curr->data);
			free(curr);
		}

