#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: s
 * Return: n
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
