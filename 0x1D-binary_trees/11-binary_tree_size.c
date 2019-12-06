#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a b tree
 * @tree: a pointer to the root
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	h_left = binary_tree_size(tree->left) + 1;
	h_right = binary_tree_size(tree->right);

	return (h_left + h_right);
}
