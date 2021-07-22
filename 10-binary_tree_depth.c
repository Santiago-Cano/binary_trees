#include "binary_trees.h"

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
