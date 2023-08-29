#include "binary_trees.h"

/**
 * binary_tree_postorder - a function tha order in post order
 * @tree: a node to be ionsert.
 * @func: pointer function to the node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
