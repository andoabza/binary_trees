#include "binary_trees.h"
/**
 * binary_tree_insert_right - a binary tree that insert to the right.
 * @parent: the root value.
 * @value: to be inserted
 *
 * RETURN - the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        if (parent == NULL)
                return (NULL);
        binary_tree_t *new;
        new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);
        binary_tree_t *current;
        current = parent->right;

        new->n = value;
        new->parent = parent;
        new->right = current;
        new->left = NULL;

        if (current != NULL)
                current->parent = new;

        parent->right = new;

        return (new);
}
