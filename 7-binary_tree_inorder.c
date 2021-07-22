#include "binary_trees.h"

/**
 * binary_tree_inorder - go through a binary tree using in-order traversal
 * @tree: root of binary tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	int n = 0;

	if (!tree || !func)
		return;

	n = tree->n;
	binary_tree_inorder(tree->left, func);
	func(n);
	binary_tree_inorder(tree->right, func);
}
