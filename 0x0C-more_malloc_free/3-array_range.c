#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers
 * @min: integer
 * @max: integer
 * Return: If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	a = malloc(sizeof(int) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = min + i;
	}

	return (a);
}
