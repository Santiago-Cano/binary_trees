#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as a left child of another node
 * @parent: parent of new node
 * @value: value of new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
