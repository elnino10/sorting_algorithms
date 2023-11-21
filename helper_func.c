#include "sort.h"

/**
 * swap_el - swaps two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: nothing
 */
void swap_el(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
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
