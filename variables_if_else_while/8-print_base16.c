#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	char n;

	for (num = 0; num < 16; num++)
		putchar((num % 16) + '0');
	for (n = 'a'; n <= 'z'; ++n)
		putchar(n);

	putchar('\n');

	return (0);
}
