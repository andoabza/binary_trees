#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node.
 * @node: a given node.
 * Return: sibling of node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;
	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left && parent->right)
    	{
		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
    	}
    	
	return (NULL);
}
