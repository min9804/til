#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *ret;

	ret = (t_list*)malloc(sizeof(t_list));
	ret -> data = data;
	ret -> next = 0;
	return (ret);
}
