#include "main.h"

/**
 *  swap_int- swap the int
 * @a: first integer to be swap
 * @b: second integer to be swap
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
