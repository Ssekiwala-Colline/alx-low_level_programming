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

	printf("Size of char_type: %zu\n", sizeof(char_type));
	printf("Size of int_type: %zu\n", sizeof(int_type));
	printf("Size of long_type: %zu\n", sizeof(long_type));
	printf("Size of long_long: %zu\n", sizeof(long_long));
	printf("Size of float_type: %zu\n", sizeof(float_type));
	return (0);
}
