#include "binary_trees.h"

/**
 * binary_tree_size - a function tha calculate the size of a node.
 * @tree: a given node.
 * Return: total value.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total;
	if (tree == NULL)
		return (0);

	total = 1;
	total += binary_tree_size(tree->left);
	total += binary_tree_size(tree->right);
	return (total);
}
