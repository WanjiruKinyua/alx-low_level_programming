#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	for (temp = *head; temp != NULL; temp = *head)
	{
		*head = temp->next;
		free(temp);
	}

	*head = NULL;
}
