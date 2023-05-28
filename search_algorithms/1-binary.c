#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: data to search
 * @size: size of the data
 * @value: value of the data
 *
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	int bol = 0, min = size / 2, max = size - 1;
	int i;

	if (!array)
		return (-1);

	while (bol <= max)
	{
		printf("Searching in array: ");
		for (i = bol; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		min = (bol + max) / 2;
		if (array[min] == value)
			return (min);
		else if (array[min] > value)
			max = min - 1;
		else
			bol = min + 1;
	}
	return (-1);
}
