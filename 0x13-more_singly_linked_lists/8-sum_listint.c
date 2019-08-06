#include "lists.h"
/**
 * sum_listint - rereturns the sum of all the data (n) of a linked list.
 * @head: pointer to the first element of the list
 *
 * Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	listint_t  *new;
	int sum = 0;

	new = head;
	while (new != NULL)
	{
		sum = sum + new->n;
		new = new->next;
	}
	return (sum);
}
