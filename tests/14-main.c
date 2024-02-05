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
    int bal;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    binary_tree_insert_right(rt->left, 54);
    binary_tree_insert_right(rt, 128);
    binary_tree_insert_left(rt, 45);
    binary_tree_insert_right(rt->left, 50);
    binary_tree_insert_left(rt->left->left, 10);
    binary_tree_insert_left(rt->left->left->left, 8);
    binary_tree_print(rt);

    bal = binary_tree_balance(rt);
    printf("Balance of %d: %+d\n", rt->n, bal);
    bal = binary_tree_balance(rt->right);
    printf("Balance of %d: %+d\n", rt->right->n, bal);
    bal = binary_tree_balance(rt->left->left->right);
    printf("Balance of %d: %+d\n", rt->left->left->right->n, bal);
    return (0);
}
