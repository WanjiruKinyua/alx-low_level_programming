#include <stddef.h>
#include "lists.h"

/**
 * listint_len - a function that returns number of elements
 * @h: interger
 * Return: c on success
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	for (; h != NULL; h = h->next)
	{
		c++;
	}

	return (c);
}
