#include "lists.h"

/**
 * find_listint_loop - Finds the start of the loop in a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head, *b = head;

	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;

		if (a == b)
		{
			a = head;

			while (a && b)
			{
				if (a == b)
					return (a);

				a = a->next;
				b = b->next;
			}
		}
	}

	return (NULL);
}
