#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of a node in the binary tree
 * @node: pointer to node to find the sibling
 * Return: return NULL if fail or the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
