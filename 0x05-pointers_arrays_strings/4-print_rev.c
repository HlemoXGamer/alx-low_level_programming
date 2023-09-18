#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: string param
 * Return: Nothing
 */

void print_rev(char *s)
{
	int strLength;

	for (strLength = 0; s[strLength] != '\0'; strLength++)
		;

	for (--strLength; strLength >= 0; --strLength)
		_putchar(s[strLength]);
	_putchar('\n');
}
