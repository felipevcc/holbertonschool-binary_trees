#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function  that checks if a node is a leaf
 * @node: node structure
 * Return: integer
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->left && !node->right)
		return (1);
	return (0);
}
