#include "main.h"
/**
 * _strcat - pinter
 * @dest: destiny
 * @src: source
 *Return: string dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x]; x++)
	;

	for (y = 0; src[y]; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = src[y];
	return (dest);
}
