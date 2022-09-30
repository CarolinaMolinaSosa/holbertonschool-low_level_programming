#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * _putchar
 * Return: void
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	putchar('\n');
}
