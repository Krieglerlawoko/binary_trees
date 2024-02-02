#include "binary_trees.h"

void free_queue(levelorder_queue_t *head);
levelorder_queue_t *create_node(binary_tree_t *node);
void push(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail);
int binary_tree_is_complete(const binary_tree_t *tree);
void pop(levelorder_queue_t **head);

/**
 * create_node - New levelorder created _queue_t node.
 * @node: Binary tree node of the new node to contain.
 *
 * Return: NULL if error occurs.
 *         Else pointer to the new node.
 */
levelorder_queue_t *create_node(binary_tree_t *node)
{
	levelorder_queue_t *new;

	new = malloc(sizeof(levelorder_queue_t));
	if (new == NULL)
		return (NULL);

	new->node = node;
	new->next = NULL;

	return (new);
}

/**
 * free_queue - Levelorder_queue_t queue freed.
 * @head: Points to the head of the queue.
 */
void free_queue(levelorder_queue_t *head)
{
	levelorder_queue_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
 * push - Node pushed to the back of a levelorder_queue_t queue.
 * @node: Binary tree node to print and push.
 * @head: A double points to the head of the queue.
 * @tail: A double points to the tail of the queue.
 *
 * Description: Exits Upon malloc failure with a status code of 1.
 */
void push(binary_tree_t *node, levelorder_queue_t *head,
		levelorder_queue_t **tail)
{
	levelorder_queue_t *new;

	new = create_node(node);
	if (new == NULL)
	{
		free_queue(head);
		exit(1);
	}
	(*tail)->next = new;
	*tail = new;
}

/**
 * pop - Head of a levelorder_queue_t queue popped.
 * @head: Double pointer to head of the queue.
 */
void pop(levelorder_queue_t **head)
{
	levelorder_queue_t *tmp;

	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}

/**
 * binary_tree_is_complete - Cheched binary tree if complete.
 * @tree: Pointer to root node of tree to traverse.
 *
 * Return: 0 if tree is NULL or not complete.
 *         otherwise 1.
 *
 * Description: If malloc failure, exits with a status code of 1.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	levelorder_queue_t *head, *tail;
	unsigned char flag = 0;

	if (tree == NULL)
		return (0);

	head = tail = create_node((binary_tree_t *)tree);
	if (head == NULL)
		exit(1);

	while (head != NULL)
	{
		if (head->node->left != NULL)
		{
			if (flag == 1)
			{
				free_queue(head);
				return (0);
			}
			push(head->node->left, head, &tail);
		}
		else
			flag = 1;
		if (head->node->right != NULL)
		{
			if (flag == 1)
			{
				free_queue(head);
				return (0);
			}
			push(head->node->right, head, &tail);
		}
		else
			flag = 1;
		pop(&head);
	}
	return (1);
}
