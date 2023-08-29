#include "binary_trees.h"

/**
 * binary_tree_delete - a recursive function that delete anode.
 * @tree: a node to be deleted.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
