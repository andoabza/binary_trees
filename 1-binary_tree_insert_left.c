#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	parent->left = new;

	return (new);
}


/*
 * #include "binary_trees.h"
 *
 * binary_tree_insert_left - a binary tree that insert to the left.
 * @parent: the root value.
 * @value: to be inserted
 *
 * Return: the new node.
 *
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new;
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	*binary_tree_t *current;
	current = parent->left;

	new->n = value;
	new->parent = parent;
	new->left = current;
	new->right = NULL;*

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;
	return (new);
}*/
