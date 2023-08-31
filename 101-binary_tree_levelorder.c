#include "binary_trees.h"
#include "link.h"

/**
 * binary_tree_levelorder - a function that order binary tree.
 * @tree: a given pointer to node.
 * @func: pointer to function.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	queue_t *queue = queue_create();

	if (queue == NULL)
		return;

	enqueue(queue, (void *)tree);

	while (!queue_is_empty(queue))
	{
		const binary_tree_t *current = (const binary_tree_t *)dequeue(queue);

		func(current->n);

		if (current->left != NULL)
			enqueue(queue, (void *)(current->left));
		if (current->right != NULL)
			enqueue(queue, (void *)(current->right));
	}

	queue_delete(queue);
}
