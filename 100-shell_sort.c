#include "sort.h"

/**
 * shell_sort -  sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: pointer to the array
 * @size: size of the array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, gap;

	if (!array || size < 2)
		return;

	gap = 1;
	while (gap < size / 3) /*generate knuth sequence*/
		gap = 3 * gap + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
