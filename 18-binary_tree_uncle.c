#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: binary tree node to find the uncle of
 * Return: pointer to uncle, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: binary tree node to find the sibling of
 * Return: pointer to sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);


	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
