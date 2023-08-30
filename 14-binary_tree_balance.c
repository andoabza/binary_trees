#include "binary_trees.h"

/**
 * binary_tree_balance - a function check balance of a node.
 * @tree: a given node.
 * Return: balance of node.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int x;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		x = +2;
	if (tree->left == NULL || tree->right == NULL)
		x = -1;
	if (tree->left == NULL && tree->right == NULL)
		x = -0;
	return (x);
}
