#include <sdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - This program prints either positive or negative
*in the standard output
*Return: followed by a new line
*/
int main(void)
{
	int n;

	srand(time());
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{ 
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
