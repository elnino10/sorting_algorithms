#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array to be sorted
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int min = 0, flag;

	if (!array || size <= 1)
		return;

	while (i < size)
	{
		flag = 0;
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				flag = 1;
			}
		}
		if (flag)
		{
			swap_el(&array[min], &array[i]);
			print_array(array, size);
		}
		i++;
	}
}
