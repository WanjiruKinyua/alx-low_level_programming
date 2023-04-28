#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns to a linked list_t
 * @h: *h to the head
 *
 * Return: c
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	for (; h != NULL; h = h->next)
	{
		c++;
	}

	return (c);
}
