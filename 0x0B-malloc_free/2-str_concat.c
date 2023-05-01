#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of first and second string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	new_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j <= len2; j++)
		new_str[i + j] = s2[j];

	return (new_str);
}
