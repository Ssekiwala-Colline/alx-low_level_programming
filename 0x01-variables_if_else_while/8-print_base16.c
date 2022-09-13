#include <stdio.h>

/**
*main - The program prints all the numbers of
*Return: base 16 followed by a new line
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
