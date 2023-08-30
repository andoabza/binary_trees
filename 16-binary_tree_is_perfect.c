#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if perfect.
 * @tree: given node.
 * Return: if perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    if (tree->left == NULL && tree->right == NULL)
        return 1;

    if (tree->left != NULL && tree->right != NULL)
        return binary_tree_is_perfect(tree->left->left) && binary_tree_is_perfect(tree->right->right);

    return 0;
}
