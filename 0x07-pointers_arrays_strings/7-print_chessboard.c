#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, j;

	for (b = 0; b < 8; b++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[b][j]);
		}
		_putchar('\n');
	}
}
