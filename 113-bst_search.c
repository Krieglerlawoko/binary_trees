#include "binary_trees.h"

/**
 * bst_search - Value in a binary search tree searched for.
 * @tree: Points to root node of BST to search.
 * @value: Value to search for in BST.
 *
 * Return: Null if the tree is NULL or the value is not found.
 *         else pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
