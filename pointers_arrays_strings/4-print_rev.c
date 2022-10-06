#include "main.h"
/**
 * print_rev- printe reverse
 *@str: string
 * Return: always  0
 */

void print_rev(char *s)
{
	int nl = 0;

	while (*(str + nl) > '\0')
	{
		nl++;
	}
	while (nl > 0)
	{
		_putchar (*(s + nl));
		nl--;
	}
	_putchar('\n');
}
