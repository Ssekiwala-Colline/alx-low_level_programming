#include <string.h>
#include "lists.h"

/**
*add_node - Adds a new node at the beginning of the list
*@head: A pointer to the head of the list
*@str: The string to be added to the list
*Return: NULL if the function failes, otherwise return
*address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
}
