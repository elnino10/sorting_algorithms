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
 * partition - partitions the array into two for sorting
 * @array: pointer to the array to be sorted
 * @size: array size
 * @lb: lower bound of the array, i.e array index 0
 * @ub: upper bound of the array, i.e array index size of array - 1
 *
 * Return: position of the partitioning pivot
 */
size_t partition(int *array, size_t size, size_t lb, size_t ub)
{
	size_t i = lb - 1, j = lb;
	int pivot;

	if (lb >= ub)
	{
		return (lb);
	}

	pivot = array[ub];
	while (j < ub)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_el(&array[j], &array[i]);
				print_array(array, size);
			}
		}
		j++;
	}
	i++;
	if (i != j)
	{
		swap_el(&array[i], &array[ub]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort_recurs - called recursively in quick_sort
 * @array: pointer to array to be sorted
 * @size: array size
 * @lb: lower bound
 * @ub: upper bound
 *
 * Return: nothing
 */
void quick_sort_recurs(int *array, size_t size, size_t lb, size_t ub)
{
	size_t piv_pos;

	if (lb < ub)
	{
		piv_pos = partition(array, size, lb, ub);

		if (lb < piv_pos)
			quick_sort_recurs(array, size, lb, piv_pos - 1);
		if (piv_pos + 1 <= ub)
			quick_sort_recurs(array, size, piv_pos + 1, ub);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t lb = 0, ub = size - 1, piv_pos;

	if (!array || lb >= ub)
		return;

	piv_pos = partition(array, size, lb, ub);

	if (lb < piv_pos)
		quick_sort_recurs(array, size, lb, ub);
	if (piv_pos + 1 <= ub)
		quick_sort_recurs(array, size, lb, ub);
}
