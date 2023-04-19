#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that prints element of array
 * @array: array
 * @size: size of the array
 * @action: is a pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	x = 0;
	while (x < size)
	{
		x++;
		action(array[x]);
	}
}
