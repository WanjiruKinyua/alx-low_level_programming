#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to  pointer to the head of the list
 * Return: if the linked list is empty return 0 otherwise success
 */
int pop_listint(listint_t **head)
{
	int success = 0;
	listint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	tmp = *head;
	success = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (success);
}
