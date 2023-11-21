#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL;

	if (!list)
		return;

	curr = *list;
	while (curr)
	{
		if (curr->prev && curr->n < curr->prev->n)
		{
			swap_nodes(curr->prev, curr);
			if (curr->prev == NULL)
				*list =  curr;
			print_list(*list);
			curr = *list;
		}
		else
			curr = curr->next;
	}
}
