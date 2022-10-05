#include "main.h"
<<<<<<< HEAD
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 */
void print_most_numbers(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
=======

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
>>>>>>> ff1fc5f8d65feb8c8f01231258a05578cb77f425
