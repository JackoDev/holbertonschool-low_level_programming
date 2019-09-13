#include "lists.h"

/**
 * dlistint_len - return the len of a double link list
 * @h: the head of the double link list
 * Return: the len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter = 0;

	if (h->next == NULL && h->prev == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		counter++;
	}
	counter = counter + 1;
	return (counter);
}
