#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * count_words - function that splits a string into words
 * @str: input string
 *
 * Return: number of words in str
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: An array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = count_words(str);

	if (str == NULL || *str == '\0' || count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < count; i++)
	{
		while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;

		len = 0;
		while (*(str + len) && !isspace(*(str + len)))
			len++;

		words[k] = malloc(sizeof(char) * (len + 1));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[k][j] = *(str++);
		words[k][j] = '\0';
		k++;
	}

	words[k] = NULL;
	return (words);
}
