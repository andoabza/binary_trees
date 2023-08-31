#include "binary_trees.h"

/**
 * binary_tree_is_complete - a fun tat count num.
 * @tree: node of.
 * Return: the calc value
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
        	if (tree->left->left == NULL && tree->right->right == NULL)
			return (1);
		if(tree->left->left && tree->left->right && tree->right->left && tree->right->right)
		{
			if (tree->left->left != NULL && tree->left->right != NULL && tree->right->left != NULL && tree->right->right != NULL)
				return (1);
		}
			if(tree->left->left->right && tree->left->right->left && tree->right->left->right && tree->right->right->left)
			{			
				if (tree->left->left->right != NULL && tree->left->right->left != NULL && tree->right->left->right != NULL && tree->right->right->left != NULL)
					return (0);
			}
		return (0);
	}    
	return 0;
}
