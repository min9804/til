#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *ret;

	ret = (t_btree*)malloc(sizeof(t_btree));
	ret->item = item;
	ret->left = 0;
	ret->right = 0;
	return (ret);
}
