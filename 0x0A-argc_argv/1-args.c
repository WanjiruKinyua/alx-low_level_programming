#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a = argc;
	(void) argv;

	printf("%d\n", a - 1);
	return (0);
}
