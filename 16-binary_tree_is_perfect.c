#include "binary_trees.h"
/**
 * binary_tree_height - size the height if a binary tree
 * @tree: binary tree
 * Return: height from the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l, h_r;

	h_l = h_r = 0;
	if (!tree)
		return (0);
	if (tree->left)
		h_l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_height(tree->right);
	if (h_l > h_r)
		return (h_l);
	else
		return (h_r);
}
/**
 * binary_tree_is_perfect - Entry point
 * @tree: binary tree
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;
	if (!tree->left && !tree->right)
		return (1);
	if (!l || !r)
		return (0);

	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}
