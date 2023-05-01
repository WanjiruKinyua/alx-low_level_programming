#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		len += strlen(av[i]) + 1; /* add 1 for the newline character */
	}

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
				str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
