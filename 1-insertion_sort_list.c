#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *change, *previous;

	if (list == NULL)
		return;

	current = *list;
	while ((current = current->next))
	{
		change = current;

		while (change->prev && current->n < current->prev->n)
		{
			previous = change->prev;

			if (change->next)
				change->next->prev = previous;

			if (previous->prevoius)
				previous->prev->next = change;
			else
				*list = change;

			previous->next = change->next;
			change->prev = previous->prev;
			change->next = previous;
			previous->prev = change;

			print_list(*list);
	
		}
	}
}
