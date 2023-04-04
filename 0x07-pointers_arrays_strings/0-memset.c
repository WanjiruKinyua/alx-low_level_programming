#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 *
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Description: This function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
