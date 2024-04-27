#include "sort.h"

/**
 * sww - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void sww(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Lomuto partition scheme to partition an array
 * @array: The array to be partitioned
 * @min: The lower index of the partition
 * @max: The higher index of the partition
 * @size: The size of the array
 *
 * Return: The index of the pivot after partitioning
 */

int lomuto_partition(int *array, int min, int max, size_t size)
{
	int pivot = array[max];
	int i = min - 1;
	int j;

	for (j = min; j < max; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				sww(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != max)
	{
		sww(&array[i + 1], &array[max]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quick_rec_sorttt - Recursively sorts an array
 * @array: The array to be sorted
 * @min: The lower index
 * @max: The higher index
 * @size: The size of the array
 */

void quick_rec_sorttt(int *array, int min, int max, size_t size)
{
	if (min < max)
	{
		int pivot_idx = lomuto_partition(array, min, max, size);

		quick_rec_sorttt(array, min, pivot_idx - 1, size);
		quick_rec_sorttt(array, pivot_idx + 1, max, size);
	}
}

/**
 * quick_sort - Sorts an array of integers
 * @array: The array to be sorted
 * @size: The size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_rec_sorttt(array, 0, size - 1, size);
}
