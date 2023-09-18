#include "main.h"

/**
 * swap_int - swap values of 2 ints
 * @a: param 1
 * @b: param 2
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
