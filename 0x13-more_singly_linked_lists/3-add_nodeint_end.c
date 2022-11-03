#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - A function that add new node at the
* end of list
* @head: A pointer
* @n: Node data.
* Return: head
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	endnode = *head;


	while (endnode->next != NULL)
		endnode = endnode->next;
	endnode->next = newnode;

	return (newnode);
}
