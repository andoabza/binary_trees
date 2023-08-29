#include "binary_trees.h"

/**
 * binary_tree_height - a function that masures the tree height.
 * @tree: the given node.
 * Return: height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	typedef size_t height;
	height left;
	height right;
	height heig;
	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	heig = left > right ? left : right;
	return (heig);
}
