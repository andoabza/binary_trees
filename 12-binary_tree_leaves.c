#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that count leaves.
 * @tree: a node of the tree.
 * Return: total leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total;
	total = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	total += binary_tree_leaves(tree->left);
	total += binary_tree_leaves(tree->right);
	return (total);
}
