#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child in a tree
 * @tree: root node of binary tree
 * Return: number of nodes with one child, 0 if node is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree || !(tree->right || tree->left))
		return (0);

	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (1 + nodes);
}
