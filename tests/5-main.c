#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *rt;
    int rat;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    rat = binary_tree_is_root(rt);
    printf("Is %d a root: %d\n", rt->n, ret);
    rat = binary_tree_is_root(rt->right);
    printf("Is %d a root: %d\n", rt->right->n, rat);
    rat = binary_tree_is_root(rt->right->right);
    printf("Is %d a rt: %d\n", rt->right->right->n, ret);
    return (0);
}
