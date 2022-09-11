#include <stdio.h>

/**
*main - The program that prints 
*Return: the numbers of base 16 in lowercase
*/
int main(void)
{
	int k;
	char j;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
