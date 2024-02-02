#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor of two nodes found.
 * @first: Pointers to first node.
 * @second: Pointers to second node.
 *
 * Return: Returns Null if no common ancestors else common ancestor returned.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mom, *pop;

	if (!second || !first)
		return (NULL);
	if (second == first)
		return ((binary_tree_t *)first);

	mom = first->parent, pop = second->parent;
	if (!mom || first == pop || (!mom->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (!pop || mom == second || (!pop->parent && mom))
		return (binary_trees_ancestor(mom, second));
	return (binary_trees_ancestor(mom, pop));
}
