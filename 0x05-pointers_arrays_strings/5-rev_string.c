#include "main.h"

/**
*rev_string -  function that reverses a string
*@s: string
*Return: Reversed string
*/

void rev_string(char *s)
{
	int i, j;

	char ch;

	for (i = 0; s[i] != '\0'; i++)

		for (j = 0; j < i / 2; j++)
		{
			ch = s[i];
			s[i] = s[i - 1 - j];
			s[i - 1 - j] = ch;
		}
	
}
