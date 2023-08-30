#include "binary_trees.h"

/**
 * binary_tree_uncle - find sibling of node.
 * @node: a given node.
 * Return: uncle of node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        binary_tree_t *parent;
	binary_tree_t *granpa;
        if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
                return (NULL);

        parent = node->parent;
	granpa = parent->parent;

        if (parent->left || parent->right)
        {
                if (granpa->left == parent)
                        return (granpa->right);
                else
                        return (granpa->left);
        }

        return (NULL);
}
