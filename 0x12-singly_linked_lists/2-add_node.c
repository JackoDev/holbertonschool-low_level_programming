#include "lists.h"
/**
 * add_node - radds a new node at the beginning of a list_t list.
 * @head: pointer to the list
 * @str: the str element of the first list element
 * Return: a pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
