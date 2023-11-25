#ifndef SORT_HEADER
#define SORT_HEADER

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*quick_sort*/
void quick_sort(int *array, size_t size);
size_t partition(int *array, size_t size, size_t lb, size_t ub);
void quick_sort_recurs(int *array, size_t size, size_t lb, size_t ub);

/*bubble_sort*/
void bubble_sort(int *array, size_t size);

/*insertion_sort*/
void insertion_sort_list(listint_t **list);

/*selection_sort*/
void selection_sort(int *array, size_t size);

/*shell_sort*/
void shell_sort(int *array, size_t size);

/*helper_functions*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap_el(int *a, int *b);
void swap_nodes(listint_t *nd_a, listint_t *nd_b);

#endif
