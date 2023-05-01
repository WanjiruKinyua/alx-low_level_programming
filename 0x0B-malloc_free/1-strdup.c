#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to duplicate
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = malloc((strlen(str) + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);

	return (dup_str);
}
