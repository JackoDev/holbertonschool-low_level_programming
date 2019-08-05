#include "lists.h"
/**
 * free_listint - free a linked list.
 * @head: pointer to the first element of the list
 *
 * Return: it's a void function
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
