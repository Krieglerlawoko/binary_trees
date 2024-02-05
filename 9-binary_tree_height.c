#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of binary tree.
 * @tree: Pointer to root node of tree to measure height.
 *
 * Return: If tree is NULL, function must return 0, else height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t a = 0, b = 0;

		a = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		b = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((a > b) ? a : b);
	}
	return (0);
}
