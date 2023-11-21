#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

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
