#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>
#include <string.h>

t_list		*ft_create_elem(void *data)
{
	t_list *list;
	
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;

	return (list);
}

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
	ptr->next = begin_list2;
}

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

void 	ft_sort_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}

int main()
{
    t_list *element1 = ft_create_elem("element1");
    t_list *element2 = ft_create_elem("element3");
    t_list *element3 = ft_create_elem("element5");
    t_list *element4 = ft_create_elem("element2");
    t_list *element5 = ft_create_elem("element4");
    t_list *element6 = ft_create_elem("element6");
    t_list *list1 = NULL;
    t_list *list2 = NULL;

    list1 = element1;
    if (element1) // Verify if all of the element are created.
        element1->next = element2;
    if (element2)
        element2->next = element3;
    list2 = element4;
    if (element4)
        element4->next = element5;
    if (element5)
        element5->next = element6;
    ft_sort_list_merge(&list1, list2, &strcmp);
    while (list1)
    {
        printf("%s\n", list1->data);
        list1 = list1->next;
    }
    return (0);
}
