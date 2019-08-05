#include "lists.h"
/**
 * free_list - free a list_t list.
 * @head: pointer to the list
 * Return: it's a void function
 */
void free_list(list_t *head)
{
	list_t *temptr;

	while (head != NULL)
	{
		temptr = head;
		head = head->next;
		free(temptr->str);
		free(temptr);
	}
}
