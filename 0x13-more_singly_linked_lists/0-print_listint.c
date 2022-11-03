#include <stdio.h>
#include "lists.h"

/**
  * print_listint - ...
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h != NULL)
	{
		while (h)
		{
			nodes++;
			printf("%i\n", h->n);
			h = h->next;
		}
	}

	return (nodes);
}
