# include "sort.h"

#include "sort.h"

/**
 * merge_sort - merge sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{

	if (!array || size < 2)
		return;

	merge_sort_split(array, size, 0, size - 1);
}

/**
 * merge_sort_split - splits the array into two halves
 * @array: pointer to array
 * @size: size of array
 * @l: left-most index of array
 * @r:right-most index of array
 *
 * Return: nothing
 */
void merge_sort_split(int *array, size_t size, size_t l, size_t r)
{
	size_t m;

	if (l < r)
	{
		if ((l + r) % 2 == 0)
			m = l + (r - l - 1) / 2;
		else
			m = (l + r) / 2;

		merge_sort_split(array, size, l, m);
		merge_sort_split(array, size, m + 1, r);

		merge_sorted_arrays(array, size, l, m, r);
	}
}

/**
 * merge_sorted_arrays - merges sorted arrays int one
 * @array: pointer to the array
 * @size: size of the array
 * @l: left-most index of the array
 * @m: middle index of the array
 * @r: right-most index of the array
 *
 * Return: nothing
 */
void merge_sorted_arrays(int *array, size_t size, size_t l, size_t m, size_t r)
{
	int *arr_copy;
	size_t i, j, k;

	arr_copy = malloc(sizeof(*arr_copy * size));
	if (!arr_copy)
		return;

	for (i = l, j = m + 1, k = l; k <= r; k++)
	{
		if ((array[i] <= array[j] || j > r) && i <= m)
		{
			arr_copy[k] = array[i];
			i++;
		}
		else
		{
			arr_copy[k] = array[j];
			j++;
		}
	}
	for (i = l; i <= r; i++)
		array[i] = arr_copy[i];
	free(arr_copy);
}
