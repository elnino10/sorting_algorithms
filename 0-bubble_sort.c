#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using the bubble sort method
 * @array: array of integers
 * @size: size of the array
 */

/**
 * swap_el - swaps the values of two pointers in an array
 * @a: pointer a
 * @b: pointer b
 */
void swap_el(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubble_sort(int *arr, size_t sz)
{
	size_t i, j;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_el(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
