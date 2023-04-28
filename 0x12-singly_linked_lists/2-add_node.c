#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *c;

	if (head == NULL || str == NULL)
		return (NULL);

	c = malloc(sizeof(list_t));
	if (c == NULL)
		return (NULL);

	c->str = strdup(str);
	if (c->str == NULL)
	{
		free(c);
		return (NULL);
	}

	c->len = strlen(str);
	c->next = *head;
	*head = c;

	return (c);
}
