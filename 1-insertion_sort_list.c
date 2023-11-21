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

/**
 * swap_nodes - swaps two nodes
 * @nd_a: pointer to the node to be swapped
 * @nd_b: pointer to the node to be swapped
 *
 * Return: nothing
 */
void swap_nodes(listint_t *nd_a, listint_t *nd_b)
{
	nd_a->next = nd_b->next;
	nd_b->prev = nd_a->prev;
	if (nd_a->prev)
		nd_a->prev->next = nd_b;
	nd_a->prev = nd_b;
	if (nd_b->next)
		nd_b->next->prev = nd_a;
	nd_b->next = nd_a;
}
