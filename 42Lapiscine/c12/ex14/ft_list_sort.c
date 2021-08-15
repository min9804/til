#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list_one;
	t_list	*list_two;
	void	*tmp;

	list_one = *begin_list;
	while (list_one)
	{
		list_two = *begin_list;
		while (list_two->next)
		{
			if ((cmp(list_two->data, list_two->next->data)) > 0)
			{
				tmp = list_two->data;
				list_two->data = list_two->next->data;
				list_two->next->data = tmp;
			}
			list_two = list_two->next;
		}
		list_one = list_one->next;
	}
}
