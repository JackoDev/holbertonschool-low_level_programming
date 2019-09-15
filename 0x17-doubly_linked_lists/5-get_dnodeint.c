#include "lists.h"

/**
 * get_dnodeint_at_index - return the node of the nth position in a link list
 * @head: the head of the double link list
 * @index: the position to search the node
 * Return: the node required in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempo;
	unsigned int counter = 0;

	tempo = head;

	if (head == NULL)
		return (NULL);
	if (index == 0 && head->next == NULL && head->prev == NULL)
		return (head);
	if (index == 0)
		return (head);

	while ((head != NULL) && (counter < index))
	{
		counter++;
		tempo = tempo->next;
	}
	return (tempo);
}
