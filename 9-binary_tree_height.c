#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: root node of binary tree
 * Return: numerical height of binary tree, 0 if node is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;

	if (!tree || !(tree->left || tree->right))
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (1 + (height_left >= height_right ? height_left : height_right));
}
