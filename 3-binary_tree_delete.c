3-binary_tree_delete.c
#include "binary_trees.h"

/**
 * binary_tree_delete - binary tree deletor
 * @tree: pointer to root node of tree deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
