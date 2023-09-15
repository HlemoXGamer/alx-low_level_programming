/**
 * _isdigit - checks if inpuut is a digit or not
 * @c: input of function
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
