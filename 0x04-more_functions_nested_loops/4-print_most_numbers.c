#include "main.h"

/**
 * print_most_numbers - print all decimal digits expect 2 and 4
 * _putchar - print a char
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	do {
		if ((i + 48) == (2) || (i + 48) == (4))
			continue;

		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);

	_putchar('\n');
}

