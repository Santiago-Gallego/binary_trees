#include "binary_trees.h"
/**
 * binary_tree_nodes - count the nodes in a binary tree
 * @tree: binary tree
 * Return: nodes from the binary tree or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c_l, c_r;

	c_l = c_r = 0;
	if (!tree || (!tree->left && !tree->right))
		return (0);

	c_l = binary_tree_nodes(tree->left);
	c_r = binary_tree_nodes(tree->right);
	return (c_l + c_r + 1);
}
