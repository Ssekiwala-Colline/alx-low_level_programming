#include "lists.h"

/**
* delete_nodeint_at_index - A function that deletes nodes at index.
* @head: The head pointer.
* @index: index to delete
* Return: 1 on success or -1 if fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *nxt;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	nxt = *head;
	prev = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(nxt);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (nxt == NULL)
			return (-1);
		prev = nxt;
		nxt = nxt->next;
	}
	if (prev)
		prev->next = nxt->next;
	free(nxt);

	return (1);
}

