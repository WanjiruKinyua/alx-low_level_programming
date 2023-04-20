#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - a function that Prints the result of simple operations.
 * @argc: arguments counts.
 * @argv: argument vectors.
 *
 * Return: (0) on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, n;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	op = argv[2];
	n = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && n == 0) ||
	    (*op == '%' && n == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(x, n));

	return (0);
}
