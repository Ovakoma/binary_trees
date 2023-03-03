#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree.
* @tree: pointer to the node to measure the depth
* Return: 0 if tree is NULL
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t init = -1;	

	if (!tree)
		return 0;

	while (tree)
	{
		init++;
		tree = tree->parent;
	}
	return init;
}
