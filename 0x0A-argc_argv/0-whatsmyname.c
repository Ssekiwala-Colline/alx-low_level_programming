#include <stdio.h>

/**
*main - prints the name of the program
*@argc: number of arguments passed to the function
*@argv: argment vector of pointes to the string
*Return: Always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

