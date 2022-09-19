#include "main.h"
#include <stdio.h>

/**
*_puts - function that prints a string, followed by a new line, to stdout
*@str: string to print
*
*Description: prints a string
*On success: returns no error
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar (10);
}

