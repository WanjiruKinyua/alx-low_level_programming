#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *_realloc - function reallocates memory block
 *
 *@ptr: void pointer
 *@old_size: unsigned int
 *@new_size: unsigned int
 *
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copyptr = ptr;
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = copyptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = copyptr[i];
	}
	free(ptr);
	return (p);
}
