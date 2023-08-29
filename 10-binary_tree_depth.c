#include "binary_trees.h"

/**
 * binary_tree_depth - a function that return depth of a node.
 * @tree: a node to be calculated.
 * Return: depth of a node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	typedef size_t depth;
	depth height;
	height = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (height);
}
