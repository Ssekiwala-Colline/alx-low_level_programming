#include "main.h"

/**
*_strcat - appends the src string to the dest string
*@dest: string that wil be appended
*@src: string that will be concatenated upon
*
*Return: pointer to @dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
