#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that count number of nodes.
 * @tree: the given node.
 * Return: number of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total;
	total = 1;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		total += binary_tree_nodes(tree->left);
		total += binary_tree_nodes(tree->right);
		return (total);
	}
	return (0);
}
