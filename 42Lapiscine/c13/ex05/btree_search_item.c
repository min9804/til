#include "ft_btree.h"

void	*btree_search_item(t_btree *root, vide *data_ref, int (*cmpf)(void *, void*))
{
	void	*ret;

	ret = 0;
	if (!ret && root->left)
		ret = btree_search_item(root->left, data_ref, cmpf);
	if (!ret && cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (!ret && root->right)
		ret = btree_search_item(root->right, data_ref, cmpf);
	return (ret);
}
