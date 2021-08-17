#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else if (cmf(item, (*root)->item) < 0)
	{
		if((*root)->left)
			btree_insert_data(&(*root)->left, item, cmf);
		else
			(*root)->item = btree_create_node(item);
	}
	else
	{
		if ((*root)->right)
			btree_insert_data(&(*root)->right, item, cmf);
		else
			(*root)->right = btree_create_node(item);
	}
}
