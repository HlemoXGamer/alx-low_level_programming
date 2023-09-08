#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Check conditons on the random number and print results
 * Return: 0 if main funciton ran successfully
 */
int main(void)
{
	int n;
	int ln; /* Stands for Last intger  */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ln);
	}
	else if (ln < 6 && ln > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ln);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, ln);
	}
	return (0);
}
