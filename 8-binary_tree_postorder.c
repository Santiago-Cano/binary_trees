#include "binary_trees.h"

/**
 * binary_tree_postorder - go through a binary tree using postorder traversal
 * @tree: root of binary tree
 * @func: pointer to function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int n = 0;

	if (!tree || !func)
		return;

	n = tree->n;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(n);
}
