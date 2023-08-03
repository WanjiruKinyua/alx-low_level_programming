#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - fucntion that converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int k;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);

		decimal_value = (decimal_value << 1) | (b[k] - '0');
	}

	return (decimal_value);
}
