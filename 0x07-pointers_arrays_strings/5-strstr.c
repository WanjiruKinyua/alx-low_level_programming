#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, j = 0;

	while (haystack[a])
	{
		while (needle[j] && (haystack[a] == needle[0]))
		{
			if (haystack[a + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			a++;
			j = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
