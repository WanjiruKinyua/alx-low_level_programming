#include "lists.h"
#include <stdio.h>

size_t hitched_listint_len(const listint_t *head);

/**
 * hitched_listint_len - function that prints a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: number of node in the list
 */
size_t hitched_listint_len(const listint_t *head)
{
	const listint_t *k, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	k = head->next;
	h = head->next->next;

	while (h != NULL)
	{
		if (k == h)
		{
			k = head;
			while (k != h)
			{
				nodes++;
				k = k->next;
				h = h->next;
			}

			k = k->next;
			while (k != h)
			{
				nodes++;
				k = k->next;
			}

			return (nodes);
		}

		k = k->next;
		h = h->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	nodes = hitched_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		size_t i = 0;

		while (i < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
