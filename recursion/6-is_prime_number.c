#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number2(n, 2));
}

/**
 * is_prime_number2 - function that gets if num is 0 or 1
 *
 * @num: input number
 * @i: Counter variable
 * Return: 0
 */

int is_prime_number2(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (is_prime_number2(num, i + 1));
}
