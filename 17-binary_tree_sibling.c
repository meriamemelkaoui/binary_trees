#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling node of a given node in a binary tree
 * @node: Pointer to the node to find the sibling of
 * Return: Pointer to the sibling node, NULL if no sibling or parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->right == node && node->parent->left)
    {
        return (node->parent->left);
    }

    if (node->parent->left == node && node->parent->right)
    {
        return (node->parent->right);
    }

    return (NULL);
}
