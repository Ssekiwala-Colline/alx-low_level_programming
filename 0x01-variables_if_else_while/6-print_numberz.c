#include <stdio.h>

/**
*main - Program to print numbers from 0
*Return: using putchar followed by a newline
*/
int main(void)
{
	char ch;

	for(ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
