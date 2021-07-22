#include "binary_trees.h"

/**
 * binary_tree_preorder - go through a binary tree using pre-order traversal
 * @tree: root of binary tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int n = 0;

	if (!tree || !func)
		return (NULL);

	n = tree->n;
	func(n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
