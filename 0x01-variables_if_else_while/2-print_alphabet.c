#include <stdio.h>

/**
*main - Program that prints the alphabet
*Return: order with putchar function
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}

