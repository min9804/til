#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int		cycle_detector(const t_list *list)
{
	t_list *l1 = (t_list *)list;
	t_list *l2 = (t_list *)list;


	while (l1 && l2 && l2->next)
	{
		l1 = l1->next;
		l2 = l2->next->next;
		if (l1 == l2)
			return (1);
	}
	return (0);
}

t_list *ft_newlst(int data)
{
	t_list *lst;

	if (!(lst = (t_list*)malloc(sizeof(*lst))))
		return (NULL);
	lst->data = data;
	lst->next = NULL;
	return (lst);
}

int		main(void)
{
	t_list *l1;
	t_list *l2;
	t_list *l3;

	l1 = ft_newlst(1);
	l2 = ft_newlst(2);
	l3 = ft_newlst(3);

	l1->next = l2;
	l2->next = l3;
	l3->next = l2;

	printf("%d\n", cycle_detector(l1));
	return (0);
}
