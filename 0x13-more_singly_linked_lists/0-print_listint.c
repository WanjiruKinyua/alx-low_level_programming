#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a functions that prints a list
 * @h: interger
 * Return: c on success
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
