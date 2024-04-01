#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right child of 
 * another node
 *
 * @parent: pointer to the parent of the node
 * @value: value to be inserted in the node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = newnode;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
		newnode->parent = parent;
		temp->parent = newnode;
	}
	return (newnode);
}
