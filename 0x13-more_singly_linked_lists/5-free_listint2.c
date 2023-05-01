#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees listint_t list
 * @head: pointer to pointer
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *n;

	c = *head;

	for (; c != NULL; c = n)
	{
		n = c->next;
		free(c);
	}
	c = NULL;
}
