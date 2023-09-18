#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string param
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
