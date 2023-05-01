#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function with a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: integer value stored in the new node
 * Return: pointer to the first node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	first_node->next = NULL;

	for (; *head != NULL; head = &(*head)->next)
		;

	*head = first_node;

	return (first_node);
}
