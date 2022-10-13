#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: number of bytes
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, ix, x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ix = 0; accept[ix] != '\0'; ix++)
		{
			if (s[i] == accept[ix])
			{
				x++;
			}
		}
		if (x > i)
			continue;

		else
			break;

	}
	return (x);
}
