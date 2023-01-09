#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - linear search
 * @array: array of data
 * @size: size of the array
 * @value: value of the data
 *
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j = 0;

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[j]);
		if (array[j] == value)
		{
			return (i);
		}
		j++;
	}
	return (-1);
}
