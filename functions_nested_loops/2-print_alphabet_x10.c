#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = '0'; i <= '9'; i++)
	{

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
