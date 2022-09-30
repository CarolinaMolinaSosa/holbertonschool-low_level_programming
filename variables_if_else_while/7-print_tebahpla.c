#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char rev;

	for (rev = 122; rev >= 97; rev--)
		putchar(rev);
	putchar('\n');
	return (0);
}
