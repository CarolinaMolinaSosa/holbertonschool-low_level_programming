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
	size_t min = 0;
	size_t max = size - 1;
	size_t i = 0;

	while (min <= max)
	{
		size_t mid = (min + max) / 2;

		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i < max)
				printf("%ld, ", i);
			else
				printf("%ld", i);
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			max = mid - 1;
		else
			min = mid + 1;
	}
	return (-1);
}
