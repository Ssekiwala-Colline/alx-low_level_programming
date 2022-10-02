#include <stdio.h>

/**
*main - prinst the number of arguments passed to it
*@argc: number of arguments passed to the function
*@argv: argument vector of pointers to the strings
*Return: always 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
