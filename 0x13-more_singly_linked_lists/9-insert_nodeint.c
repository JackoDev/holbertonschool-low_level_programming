#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first element of the list
 * @idx: index of the list to be added the new node
 * @n: the data for the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t  *new, *make;
	unsigned int index = 0;

	if (*head == NULL)
		return (NULL);
	new = *head;
	while (new != NULL)
	{
		new = new->next;
		index++;
		if (index == idx - 1)
		{
			make = malloc(sizeof(listint_t));
			if (make == NULL)
				return (NULL);
			make->n = n;
			make->next = new->next;
			new->next = make;
			return (make);
		}
	}
	return (NULL);
}
