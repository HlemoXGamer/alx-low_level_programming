#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <string.h>

void _putchar(char str[])
{
	size_t length = strlen(str);
	for (size_t i = 0; i < length; i++)
	{
		putchar(str[i]);
		if(str[i] == '\0')
			putchar('\n')
	}
}

#endif
