#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in a binary tree
 * @tree: root node of binary tree
 * Return: integer number of leaves in tree, 0 if node is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);

	if (!(tree->right && tree->left))
		return (1);

	leaves = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);
	return (leaves);
}
