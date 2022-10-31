#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Product of numbers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -- Returns the result of the division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Division of numbers
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division of numbers
*/

int op_mod(int a, int b)
{
	return (a % b);
}
