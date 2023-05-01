#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to be deleted, starting at 0
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	/* check if list is empty */
	if (*head == NULL)
		return (-1);

	current = *head;
	/* delete first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = (*head)->next;
	for (i = 1; current != NULL && i <= index; i++)
	{
		/* delete current node */
		if (i == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
	}

	return (-1);
}
