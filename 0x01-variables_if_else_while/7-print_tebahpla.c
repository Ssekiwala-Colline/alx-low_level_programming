#include <stdio.h>
/**
*main - The program prints  the lowercase alphabet in reverse
*Return: followed by a new line
*/
int main(void)
{
	int i;
	
	for(i = 'z'; i >= 'a'; i-- )
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
