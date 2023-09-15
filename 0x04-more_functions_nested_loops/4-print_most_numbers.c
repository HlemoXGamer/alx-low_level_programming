#include "main.h"

/**
 * print_most_ibers - print all decimal digits expect 2 and 4
 * _putchar - print a char
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; ++i)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}

	_putchar('\n');
}

