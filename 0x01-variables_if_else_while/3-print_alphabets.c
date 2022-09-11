#include <stdio.h>

/**
*main - The program prints both uppercase and lowercase
* Return: letters on the same line followed by a new line
*/
int main(void)
{
	char ch;

	do
	{
		putchar(ch);
		ch++;
	}while(ch <= 'z');
	for(ch = 'A'; ch <= 'Z'; ch++)
	{ 
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
