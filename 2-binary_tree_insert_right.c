#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as a right child of another node
 * @parent: parent of new node
 * @value: value of new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	newnode->n = value;
	if (parent->right)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
