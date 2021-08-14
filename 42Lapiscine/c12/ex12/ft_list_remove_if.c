#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *curr;

	while (*begin_list)
	{
		if (!cmp((*begin_list)->data, data_ref))
		{
			curr = *begin_list;
			*begin_list = (*begin_list)->next;
			free_fct(curr->data);
			free(curr);

