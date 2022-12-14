#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int len;

	for (; str[i] != '\0'; i++)
		continue;
	len = i;

	if (len % 2 != 0)
		for (i = ((len / 2) + 1); (str[i] != '\0'); i++)
			_putchar(str[i]);
	else
		for (i = (len / 2); (str[i] != '\0'); i++)
			_putchar(str[i]);

	_putchar('\n');
}
