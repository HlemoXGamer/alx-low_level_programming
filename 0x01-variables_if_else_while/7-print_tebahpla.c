#include <stdio.h>

/**
 * main - print a char followed by break line
 * Return: 0 if main ran successfully
 */
int main(void)
{
	char c = getchar();

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}

