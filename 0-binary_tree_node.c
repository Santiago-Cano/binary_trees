#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 * @parent: Parent node of the new node
 * @value: Value stored in the new node
 * Return: Pointer to new node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	newnode->parent = parent;

	return (newnode);
}
