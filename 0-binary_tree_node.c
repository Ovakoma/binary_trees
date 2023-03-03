#include "binary_trees.h"

/**
* binary_tree_node - a function that creates a binary tree node.
* @parent: a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: pointer to the new node
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = NULL;
	newNode->left = NULL;
	newNode->right = NULL;

	if (!parent)
		parent = newNode;
	else
		newNode->parent = parent;

	return (newNode);
}
