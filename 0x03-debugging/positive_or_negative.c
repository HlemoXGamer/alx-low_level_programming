#include <stdio.h>

/**
 * main - Entry Point
 * Description: print a value of a status of interger
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
