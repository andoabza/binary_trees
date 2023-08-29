#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that check if node is leaf.
 * @node: a given node to check.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
