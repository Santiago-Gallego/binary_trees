#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary tree
 * Return: 1 if is full or 0 in otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int c_l, c_r;

	c_l = c_r = 0;
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	c_l = binary_tree_is_full(tree->left);
	c_r = binary_tree_is_full(tree->right);
	if (c_l == 0 || c_r == 0)
		return (0);
	else
		return (1);
}
