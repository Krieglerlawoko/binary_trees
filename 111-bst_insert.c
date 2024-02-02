#include "binary_trees.h"

/**
 * bst_insert - Value inserted in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST.
 * @value: Value to store in the inserted node.
 *
 * Return: Points to created node, else NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *curr;

	if (tree != NULL)
	{
		curr = *tree;

		if (curr == NULL)
		{
			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < curr->n) /* inserts in left subtree */
		{
			if (curr->left != NULL)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->left = new);
		}
		if (value > curr->n) /* inserts in right subtree */
		{
			if (curr->right != NULL)
				return (bst_insert(&curr->right, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->right = new);
		}
	}
	return (NULL);
}
