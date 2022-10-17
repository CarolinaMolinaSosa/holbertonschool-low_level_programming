#include "main.h"
/**
 * _puts- puts
 *@str: string
 * Return: always  0
 */

void _puts(char *str)
{
	int nl = 0;

	while (*(str + nl) != '\0')
	{
		_putchar(*(str + nl));
		nl++;
	}
	_putchar('\n');
}
