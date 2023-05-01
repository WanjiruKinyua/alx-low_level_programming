#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	/* Free each node in the list */
	for (c = head; c != NULL; c = head)
	{
		head = head->next;
		free(c);
	}
}
