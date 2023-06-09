#include "main.h"
/**
 * _strlen_recursion - strlen with recursion at entry point
 * @s: string to calculate length
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
