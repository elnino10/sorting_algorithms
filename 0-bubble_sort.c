#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array to be sorted
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (!array || size < 2)
		return;

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
		if (!swapped)
			break;
	}
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
