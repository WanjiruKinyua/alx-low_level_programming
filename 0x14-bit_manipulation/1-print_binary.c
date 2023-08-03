#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number in decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check = 1, w = n, i = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (w > 0)
	{
		i++;
		w = w >> 1;
	}

	check = check << (i - 1);

	for (; i > 0; i--)
	{
		if (n & check)
			putchar('1');
		else
			putchar('0');

		check = check >> 1;
	}
}
