#include "binary_trees.h"

/**
 * binary_tree_uncle - find sibling of node.
 * @node: a given node.
 * Return: uncle of node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        binary_tree_t *parent;
        if (node == NULL || node->parent->parent == NULL)
                return (NULL);

        parent = node->parent;

        if (parent->left || parent->right)
        {
                if (parent->left == node)
                        return (parent->parent->left);
                else
                        return (parent->parent->right);
        }

        return (NULL);
}
