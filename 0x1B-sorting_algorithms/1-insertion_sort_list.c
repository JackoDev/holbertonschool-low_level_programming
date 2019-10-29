#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: pointer to the list
 * Return: its a void function
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tempo;

	tempo = (*list)->next;
	while (tempo != NULL)
	{
		while ((tempo->prev != NULL) && (tempo->n < tempo->prev->n))
		{
			tempo->prev->next = tempo->next;
			if (tempo->next != NULL)
				tempo->next->prev = tempo->prev;
			tempo->next = tempo->prev;
			tempo->prev = tempo->prev->prev;
			tempo->next->prev = tempo;
			if (tempo->prev == NULL)
				*list = tempo;
			else
				tempo->prev->next = tempo;
			print_list(*list);
		}
		tempo = tempo->next;
	}
}
