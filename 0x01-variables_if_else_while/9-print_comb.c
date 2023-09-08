#include <stdio.h>

/**
 * main - prints all numbers from 0 to 9 separeted by ,
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n == 9) /* to stop it from puting 9 after last number */
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
