#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a listint_t linked list
 * @head: head of the list
 *
 * Return: sum of all data in the list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the list and add up the data of each node */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
