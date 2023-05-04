#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int count = 1;
	char *p = (char *)&count;

	if (*p)
		return (1);
	else
		return (0);
}
