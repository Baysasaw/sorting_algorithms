#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 */
	void bubble_sort(
			__attribute__ ((unused)) int *array, /* Pointer */
			__attribute__ ((unused)) size_t size
			)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
}
