#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		putchar((num % 16) + '0');

	putchar('\n');

	return (0);
}
