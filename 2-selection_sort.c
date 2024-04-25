#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int swa__ap = 0;

	size_t i, j;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		size_t min = i;

		swa__ap = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}

		}
		if (min != i)
		{
			int tmp = array[i];

			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);

		}
		swa__ap = 1;

		if (swa__ap == 0)
		{
			break;
		}
	}
}
