#include <stdio.h>

/**
 * main - prints all values of hexidemal values
 * Return - Always 0
 */
int main(void)
{
	int n = 0;
	char c = '0';

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
