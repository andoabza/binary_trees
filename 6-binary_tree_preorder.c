#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that orders binary tree in preorder.
 * @tree: the pointer node.
 * @func: a pointer to node function.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
