#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	putchar('\n');

	return (0);
}

