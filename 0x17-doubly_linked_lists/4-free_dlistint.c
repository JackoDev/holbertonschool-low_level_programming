#include "lists.h"

/**
 * free_dlistint - free a double linked list
 * @head: the head of the double link list
 * Return: it's a void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
