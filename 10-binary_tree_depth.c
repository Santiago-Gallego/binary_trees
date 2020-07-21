#include "binary_trees.h"
/**
 * binary_tree_depth - size the depth if a binary tree
 * @tree: binary tree
 * Return: depth from the binary tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
