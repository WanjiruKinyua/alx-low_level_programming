#include <stdio.h>
#include "lists.h"

/**
 * print_list - entry point
 * @h: *h to head
 *
 * Return: c
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	for (; h != NULL; h = h->next, c++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	}

	return (c);
}
