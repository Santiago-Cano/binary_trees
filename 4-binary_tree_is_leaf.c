#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a binary tree node is a leaf
 * @node: node to check
 * Return: 1 on leaf, 0 if not leaf or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);
	return (1);
}
