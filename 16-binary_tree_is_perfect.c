#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node of binary tree
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_depth(tree->left) != binary_tree_depth(tree->right))
		return (0);

	if (binary_tree_size(tree->left) != binary_tree_size(tree->right))
		return (0);
	return (1);
}

/**
 * binary_tree_depth - measure depth of a node in a binary tree
 * @tree: node in a binary tree
 * Return: integer depth of binary tree, 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}

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
