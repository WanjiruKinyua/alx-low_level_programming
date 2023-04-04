#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	/* Calculate the sum of the main diagonal and the secondary diagonal*/
	for (i = 0; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	}
	for (j = 0; j < size; j++)
	{
	sum2 += *(a + j * size + (size - 1 - j));
	}

	/* Print the sum of the two diagonals*/
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}

