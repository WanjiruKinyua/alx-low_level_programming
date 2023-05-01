#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		count++;
		if ((*h)->next >= *h)
		{
			tmp = (*h)->next;
			(*h)->next = NULL;
			*h = tmp;
			break;
		}
		current = *h;
		*h = (*h)->next;
		free(current);
	}

	*h = NULL;
	return (count);
}
