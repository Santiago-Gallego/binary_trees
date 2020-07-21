#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 * Return: number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, c_l = 0, c_r = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		leaves++;
		return (leaves);
	}

	c_l = binary_tree_leaves(tree->left);
	c_r = binary_tree_leaves(tree->right);
	return (c_l + c_r);
}
