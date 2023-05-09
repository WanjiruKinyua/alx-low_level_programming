#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should
 * read and print
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, t;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (w);
}
