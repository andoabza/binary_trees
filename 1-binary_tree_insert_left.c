#include "binary_trees.h"
/**
 * binary_tree_insert_left - a binary tree that insert to the left.
 * @parent: the root value.
 * @value: to be inserted
 *
 * Return: the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new;
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	binary_tree_t *current;
	current = parent->left;

	new->n = value;
	new->parent = parent;
	new->left = current;
	new->right = NULL;

	if (current != NULL)
		current->parent = new;

	parent->left = new;
	return (new);
}
