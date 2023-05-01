#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to the first node
 *
 * Return: number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}

	*h = NULL;

	return (count);
}
