#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: pointer to pointer to the head of the list
 * @idx: index of the node
 * @n: integer value stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *first_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* Create the first node and initialize it */
	first_node = malloc(sizeof(*first_node));
	if (first_node == NULL)
		return (NULL);
	first_node->n = n;

	if (idx == 0) /* special case: insert at the beginning */
	{
		first_node->next = *head;
		*head = first_node;
		return (first_node);
	}
	/* Traverse the list until the position is found */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	/* If the position is not found, free the first node and return NULL */
	if (current == NULL)
	{
		free(first_node);
		return (NULL);
	}

	/* Insert the first node */
	first_node->next = current->next;
	current->next = first_node;

	return (first_node);
}
