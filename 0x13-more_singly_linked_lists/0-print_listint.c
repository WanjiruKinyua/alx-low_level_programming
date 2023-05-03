#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints elements of a linked list
 * @h: a pointer to the head of the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
