#include "main.h"

/**
 * print_number - print all decimal digits
 * _putchar - print a char
 * Return: Always 0
 */

void print_numbers(void)
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
