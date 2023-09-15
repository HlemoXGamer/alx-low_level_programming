#include "main.h"

/**
 * print_line - print line
 * @n: is the number of _ char
 * Return: Always 0
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
