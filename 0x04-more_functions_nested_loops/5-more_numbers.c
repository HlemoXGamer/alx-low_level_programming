#include "main.h"

/**
 * more_numbers - print all decimal digits 10 times
 * _putchar - print a char
 * Return: Always 0
 */

void more_numbers(void)
{
	int passes = 0;
	int i = 0;

	for (passes = 0; passes <= 9; passes++)
	{
		for (i = 0; i <= 14; i++)
		{
			c = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				c = i % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
