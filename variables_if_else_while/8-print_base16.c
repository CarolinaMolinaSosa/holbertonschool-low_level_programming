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

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (n = 'a'; n <= 'f'; ++n)
		putchar(n);

	putchar('\n');

	return (0);
}
