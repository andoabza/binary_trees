#include "binary_trees.h"
/**
 * binary_tree_insert_right - a binary tree that insert to the right.
 *
 * @parent: the root value.
 * @value: to be inserted
 *
 * RETURN - the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->right = new;

	return (new);
}
