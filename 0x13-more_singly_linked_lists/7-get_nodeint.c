#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first element of the list
 * @index: the number of the node to return
 * Return: pointer to the index found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t  *new;
	unsigned int count = 0;

	new = head;
	while (new != NULL)
	{
		if (count == index)
			return (new);
		new = new->next;
		count++;
	}
	return (NULL);
}
