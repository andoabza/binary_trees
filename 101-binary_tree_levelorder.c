#include "binary_trees.h"

queue_t *queue_create(void);
int queue_is_empty(const queue_t *queue);
void enqueue(queue_t *queue, void *data);
void *dequeue(queue_t *queue);
void queue_delete(queue_t *queue);

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

/**
 * queue_creat - a function that create queue.
 * Return: creted queue.
 */

queue_t *queue_create(void)
{
	queue_t *queue = (queue_t *)malloc(sizeof(queue_t));
	if (queue == NULL)
		return NULL;

	queue->start = NULL;
	queue->end = NULL;

	return queue;
}

/**
 * queue_is_empty - a func that check if queue is empty.
 * @queue: given queue node.
 */

int queue_is_empty(const queue_t *queue)
{
	return (queue->start == NULL);
}

/**
 * enqueue - a func that enque a node.
 * queue: a queue to be enqueued.
 * @data: the queue data.
 */

void enqueue(queue_t *queue, void *data)
{
	queue_node_t *new_node = (queue_node_t *)malloc(sizeof(queue_node_t));
	if (new_node == NULL)
		return;

	new_node->data = data;
	new_node->link = NULL;

	if (queue_is_empty(queue))
	{
		queue->start = new_node;
		queue->end = new_node;
	}
	else
	{
		queue->end->link = new_node;
		queue->end = new_node;
	}
}

/**
 * dequeue - function that dequeue the queue.
 * @queue: a pointer to the queue.
 */

void *dequeue(queue_t *queue)
{
	if (queue_is_empty(queue))
		return (NULL);

	queue_node_t *temp = queue->start;
	void *data = temp->data;

	if (queue->start == queue->end)
		queue->end = NULL;

	queue->start = queue->start->link;
	free(temp);

	return (data);
}

/**
 * queue_delete - a function that delete queue after.
 * @queue: pointer to the queue node.
 */

void queue_delete(queue_t *queue)
{
	while (!queue_is_empty(queue))
	{
		dequeue(queue);
	}

	free(queue);
}
