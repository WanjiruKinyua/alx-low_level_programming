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
	const listint_t *first = h;

	while (first != NULL)
	{
		printf("%d\n", first->n);
		first = first->next;
		c++;
	}

	return (c);
}
