#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list.
 *
 * @head: The list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	/*
	* Traverse the list and free each node.
	*/
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
