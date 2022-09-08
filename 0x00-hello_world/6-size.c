#include <stdio.h>

/**
*main - print different sizes of different data types 
*Return: like float, int, double and char
*/
int main(void)
{
	char char_type;
	int int_type;
	long long_type;
	long long long_long;
	float float_type;

	printf("Size of a char: %zu\n", sizeof(char_type));
	printf("Size of an int: %zu\n", sizeof(int_type));
	printf("Size of a long int: %zu\n", sizeof(long_type));
	printf("Size of a long long int: %zu\n", sizeof(long_long));
	printf("Size of a float: %zu\n", sizeof(float_type));
	return (0);
}
