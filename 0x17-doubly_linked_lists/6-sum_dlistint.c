#include "lists.h"
/**
 * sum_dlistint - return the sum of all de data nodes of double link list
 * @head: the head of the double link list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head->next == NULL && head->prev == NULL)
		return (head->n);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
