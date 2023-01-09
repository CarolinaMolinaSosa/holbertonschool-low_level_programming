#include "search_algos.h"
#include <stddef.h>

/**
 *
 *
 *
 *
 *
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
			return i;
		}
		j++;
	}
	return -1;
}
