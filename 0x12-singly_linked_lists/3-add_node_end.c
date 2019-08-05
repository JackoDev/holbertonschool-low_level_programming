#include "lists.h"
/**
 * _strlen - lenght of the string
 * @s: pointer to the string
 * Return: size of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the list
 * @str: the str element of the first list element
 * Return: a pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temptr;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new->str);
			free(new);
			return (NULL);
		}
	new->len = _strlen(new->str);
	new->next = (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		temptr = *head;
		while (temptr->next != NULL)
		{
			temptr = temptr->next;
		}
		temptr->next = new;
	}
	return (new);
}
