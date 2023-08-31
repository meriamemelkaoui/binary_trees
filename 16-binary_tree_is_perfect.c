#include "binary_trees.h"
/**
 * find_depth - Finds the depth of the leftmost leaf in a binary tree
 * @tree: Pointer to the root node of the tree to check
 * Return: Depth of the leftmost leaf
 */
int find_depth(const binary_tree_t *tree)
{
    int i = 0;

    while (tree)
    {
        i++;
        tree = tree->left;
    }

    return (i);
}

/**
 * test_is_perfect - Tests if a binary tree is perfect or not
 * @tree: Pointer to the root node of the tree to check
 * @count: Counter levels
 * @level: Level of the binary tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int test_is_perfect(const binary_tree_t *tree, int count, int level)
{
    if (tree == NULL)
    {
        return (1);
    }

    if (!tree->left && !tree->right)
    {
        return (count == level + 1);
    }

    if (!tree->left || !tree->right)
    {
        return (0);
    }

    return (test_is_perfect(tree->left, count, level + 1) &&
            (test_is_perfect(tree->right, count, level + 1)));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int depth = 0;

    if (tree == NULL)
    {
        return (0);
    }

    depth = find_depth(tree);

    return (test_is_perfect(tree, depth, 0));
}
