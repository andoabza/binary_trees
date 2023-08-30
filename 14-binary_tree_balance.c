#include "binary_trees.h"

size_t binary_tree(const binary_tree_t *tree);
int max(int a, int b);

/**
 * binary_tree_balance - a function check balance of a node.
 * @tree: a given node.
 * Return: balance of node.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;
	if (tree == NULL)
		return (0);
	left = binary_tree(tree->left);

	right = binary_tree(tree->right);

	return (left - right);
}
/**
 * max - check max value.
 * @a: value a.
 * @b: value b.
 * Return: calculated value.
 */

int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree - a func that calc height.
 * @tree: given node.
 * Return: height of node.
 */

size_t binary_tree(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	if (tree == NULL)
		return (-1);

	left_height = binary_tree(tree->left);
	right_height = binary_tree(tree->right);

	return (max(left_height, right_height) + 1);
}
