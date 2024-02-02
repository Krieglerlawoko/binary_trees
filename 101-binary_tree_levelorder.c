#include "binary_trees.h"

/**
 * struct node_s - A singly linked list
 * @node: const binary tree node variable
 * @next: pointer to next node
 */
typedef struct node_s
{
	struct node_s *next;
        const binary_tree_t *node;
} ll;

ll *get_children(ll *head, const binary_tree_t *parent);
ll *append(ll *head, const binary_tree_t *btnode);
void levels_rec(ll *head, void (*func)(int));
void free_list(ll *head);

/**
 * binary_tree_levelorder - Goes through a binary tree
 * @tree: Pointers to root node of the tree to traverse.
 * @func: Pointers to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	ll *children = NULL;

	func(tree->n);
	children = get_children(children, tree);
	levels_rec(children, func);

	free_list(children);
}

/**
 * levels_rec - function called on all nodes at each level.
 * @head: Pointers to head of linked list with nodes at one level.
 * @func: Pointers to a func to call for each node.
 */
void levels_rec(ll *head, void (*func)(int))
{
	ll *children = NULL, *c = NULL;

	if (!head)
		return;
	for (c = head; c != NULL; c = c->next)
	{
		func(c->node->n);
		children = get_children(children, c->node);
	}
	levels_rec(children, func);
	free_list(children);
}

/**
 * get_children - Children of parent appended to linked list.
 * @head: Points to head of linked list where children will be appended.
 * @parent: Points to node whose children we want to append.
 * Return: Points to head of linked list of children.
 */
ll *get_children(ll *head, const binary_tree_t *parent)
{
	if (parent->left)
		head = append(head, parent->left);
	if (parent->right)
		head = append(head, parent->right);
	return (head);
}

/**
 * append - New node added at the end of a linkedlist
 * @head: Points to head of linked list
 * @btnode: const binary tree node to append
 * Return: On failure points to head or NULL
 */
ll *append(ll *head, const binary_tree_t *btnode)
{
	ll *new = NULL, *last = NULL;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->node = btnode;
		new->next = NULL;
		if (!head)
			head = new;
		else
		{
			last = head;
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (head);
}

/**
 * free_list - All nodes in a linked list freed
 * @head: Points to head of list_t linked list
 */
void free_list(ll *head)
{
	ll *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
