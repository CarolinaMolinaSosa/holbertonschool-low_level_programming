#include "main.h"
/**
 * *_strdup- returns a pointer to a new string
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, ii;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	str2 = malloc(*str * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii < i; ii++)
	{
		str2[ii] = str[ii];
	}
	return (str2);
}
