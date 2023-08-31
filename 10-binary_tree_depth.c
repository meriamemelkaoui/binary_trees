#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node for which to measure the depth
 * Return: Depth of the specified node in the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL || !tree->parent)
    {
        return (0);
    }

    depth = binary_tree_depth(tree->parent) + 1;
    return (depth);
}
