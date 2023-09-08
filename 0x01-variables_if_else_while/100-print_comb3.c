#include <stdio.h>

/**
 * main - prints all possible 2 digits numbers
 * Return: Always 0
 */
int main(void)
{
	int n1 = 0;
	int n2 = 0;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');

			if (n1 == 8 && n2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
