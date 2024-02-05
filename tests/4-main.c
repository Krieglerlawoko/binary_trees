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
    int ret;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_print(rt);

    rat = binary_tree_is_leaf(rt);
    printf("Is %d a leaf: %d\n", rt->n, rat);
    rat = binary_tree_is_leaf(rt->right);
    printf("Is %d a leaf: %d\n", rt->right->n, rat);
    rat = binary_tree_is_leaf(rt->right->right);
    printf("Is %d a leaf: %d\n", rt->right->right->n, rat);
    return (0);
}
