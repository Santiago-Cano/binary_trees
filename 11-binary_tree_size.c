#include "binary_trees.h"

/**
 * binary_tree_size - measure size of binary tree
 * @tree: root node of binary tree
 * Return: integer size of binary tree, 0 if node passed is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (1 + size);
}
