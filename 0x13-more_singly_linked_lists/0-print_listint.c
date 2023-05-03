#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints elements of a linked list
 * @h: a pointer to the head of the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	const listint_t *first_node = h;

	while (first_node)
	{
		printf("%d\n", first_node->n);
		num++;
		first_node = first_node->next;
	}

	return (num);
}
