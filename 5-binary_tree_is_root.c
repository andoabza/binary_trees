#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that check is node is root.
 * @node: a node to be checked
 * Return: 1 or 0 based on node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
