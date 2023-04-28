#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - at the end of a linked list.
 *
 * @head: A double pointer to the list_t list.
 * @str: The string to put in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *c;
	list_t *temp = *head;
	unsigned int len = strlen(str);

	c = malloc(sizeof(list_t));
	if (!c)
	{
		return (NULL);
	}
	c->str = strdup(str);
	c->len = len;
	c->next = NULL;

	if (*head == NULL)
	{
		*head = c;
		return (c);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = c;

	return (c);
}
