#include "main.h"

/**
* _ strstr - locates a substring
*@haystack: string in which to check for needle
*@needle: substring to find in haystack
*
*Return: pointer to begenning of a needle in haystack or NULL if no match
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i,j;

	while (haystack[i])
	{

	while (needle[j] && (haystack[j] == needle[0]))
	{
		if (haystack[i + j] == needle[j])
			j++;
		else
			break;
	}
	if (needle[j])
	{
		i++;
		j = 0;
	}
	else
		return (haystack + i);
	}
	return (0);
}
