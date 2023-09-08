#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 * Return: Always 0
 */
int main(void)
{
	char c = getchar();

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}

