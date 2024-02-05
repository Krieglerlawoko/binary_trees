#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * print_num - Number printd
 *
 * @n: Number to print
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *rt;

    rt = binary_tree_node(NULL, 98);
    rt->left = binary_tree_node(rt, 12);
    rt->right = binary_tree_node(rt, 402);
    rt->left->left = binary_tree_node(rt->left, 6);
    rt->left->right = binary_tree_node(rt->left, 56);
    rt->right->left = binary_tree_node(rt->right, 256);
    rt->right->right = binary_tree_node(rt->right, 512);

    binary_tree_print(rt);
    binary_tree_preorder(rt, &print_num);
    return (0);
}
