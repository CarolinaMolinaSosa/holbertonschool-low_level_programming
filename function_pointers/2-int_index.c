#include "function_pointers.h"

/**
 * int_index - Searches for integer
 * @array: Array used to search
 * @size: Size of array
 * @cmp: Pointer to function used to search
 *
 * Return: index for found element on success, -1 on failure
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!cmp || !array)
		return (-1);

	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
