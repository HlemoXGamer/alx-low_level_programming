#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: string param
 * Return: Nothing
 */

void print_rev(char *s)
{
	int strLength = _strlen(*s);

	for (--strLength; strLength >=; --strLength)
		_putchar(s[strLength]);
	_putchar('\n');
}
