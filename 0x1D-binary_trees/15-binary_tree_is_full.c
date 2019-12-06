#include "binary_trees.h"
/**
 * binary_tree_is_full - function that measures the size of a b tree
 * @tree: a pointer to the root
 * Return: the size of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
