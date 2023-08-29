#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that check if node is leaf.
 * @node: a given node to check.
 * Return: 1 or 0 based on is leaf.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
