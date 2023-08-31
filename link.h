#ifndef LINK_H
#define LINK_H

/**
 * queue_node - a linked list  for the queue.
 * @data: data to be stored.
 * @link: the address of the pinter.
 */
typedef struct queue_node
{
	void *data;
    	struct queue_node *link;
} queue_node_t;

/**
 * queue_node_t - point to front and back.
 * @start - pointer to the start.
 * @end - pointer to end.
 */

typedef struct
{
    	queue_node_t *start;
   	queue_node_t *end;
} queue_t;

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

#endif
