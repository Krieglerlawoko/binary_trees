nclude "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Binary tree checked if is a valid binary search tree.
 * @tree: Points to root node of tree to check.
 * @lo: Value of the smallest node visited so far.
 * @hi: Value of the largest node visited so far.
 *
 * Return: 1 if tree is a valid BST else 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n > hi || tree->n < lo)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks Binary tree if is a valid binary search tree.
 * @tree: Pointer to root node of the tree to check.
 *
 * Return: If tree is a valid 1 else, BST else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
