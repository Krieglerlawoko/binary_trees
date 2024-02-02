#include "binary_trees.h"

/**
 * array_to_avl - An AVL tree built from an array.
 * @array: Pointer to first element of array to be converted.
 * @size: Number of elements in @array.
 *
 * Return: Points to root node of created AVL, else NULL for failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t a, b;
	avl_t *tree = NULL;

	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (array[b] == array[a])
				break;
		}
		if (b == a)
		{
			if (avl_insert(&tree, array[a]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
