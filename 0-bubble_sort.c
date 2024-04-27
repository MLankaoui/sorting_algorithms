#include "sort.h"

/**
 * bubble_sort - sorting an an array using bubble sort.
 * @array: the array that needs to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	int te__mp, swa__aaap;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		swa__aaap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				te__mp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swa__aaap;

				print_array(array, size);
			}

			swa__aaap = 1;
		}
		if (swa__aaap == 0)
		{
			break;
		}
	}

}
