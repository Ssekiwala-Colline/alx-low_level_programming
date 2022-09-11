#include <stdio.h>

/**
*main - The program that prints lowercase
*Return: alphabet followed by a new line
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
