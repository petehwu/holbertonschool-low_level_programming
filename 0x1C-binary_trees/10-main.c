#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t depth;
/*
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
        root = binary_tree_node(NULL, 98);
        root->left = binary_tree_node(root, 12);
        root->right = binary_tree_node(root, 402);
        root->left->left = binary_tree_node(root->left, 6); 
        root->left->right = binary_tree_node(root->left, 56);
        root->right->left = binary_tree_node(root->right, 256);
        root->right->right = binary_tree_node(root->right, 512);
        root->left->left->left = binary_tree_node(root->left->left, 3); 
        root->left->left->right = binary_tree_node(root->left->left, 8); 
        root->right->right->left = binary_tree_node(root->right->right, 300);
        root->right->right->right = binary_tree_node(root->right->right, 612);
        root->left->left->left->left = binary_tree_node(root->left->left->left, 1); 
        root->right->right->left->left = binary_tree_node(root->right->right->left, 700);
        binary_tree_print(root);
	*/
        root = binary_tree_node(NULL, 98);
        root->left = binary_tree_node(root, 12);
        root->right = binary_tree_node(root, 402);
        root->left->left = binary_tree_node(root->left, 6); 
        root->left->right = binary_tree_node(root->left, 56);
        root->left->right->left = binary_tree_node(root->left->right, 48);
        root->left->right->left->right = binary_tree_node(root->left->right->left, 88);
        root->left->right->left->right->right = binary_tree_node(root->left->right->left->right, 99);
        root->right->left = binary_tree_node(root->right, 256);
        root->right->right = binary_tree_node(root->right, 512);
        root->left->left->left = binary_tree_node(root->left->left, 3); 
        root->left->left->right = binary_tree_node(root->left->left, 8); 
        root->right->right->left = binary_tree_node(root->right->right, 300);
        root->right->right->right = binary_tree_node(root->right->right, 612);
        root->left->left->left->left = binary_tree_node(root->left->left->left, 1); 
        root->right->right->left->left = binary_tree_node(root->right->right->left, 700);
        binary_tree_print(root);
    depth = binary_tree_depth(root);
    printf("Depth of %d: %lu\n", root->n, depth);
    depth = binary_tree_depth(root->right);
    printf("Depth of %d: %lu\n", root->right->n, depth);
    depth = binary_tree_depth(root->left->right);
    printf("Depth of %d: %lu\n", root->left->right->n, depth);


    depth = binary_tree_depth(root->right->right->left->left);
    printf("Depth of %d: %lu\n", root->right->right->left->left->n, depth);
    depth = binary_tree_depth(root->left->left->left->left);
    printf("Depth of %d: %lu\n", root->left->left->left->left->n, depth);
    depth = binary_tree_depth(root->left->left->right);
    printf("Depth of %d: %lu\n", root->left->left->right->n, depth);
    depth = binary_tree_depth(root->left->right->left->right->right);
    printf("Depth of %d: %lu\n", root->left->right->left->right->right->n, depth);
    return (0);
}
