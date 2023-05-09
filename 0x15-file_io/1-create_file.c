#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file
 * Return: if the funection fails - -1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t  length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytes_written = 0;
	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytes_written = write(fd, text_content, length);
	}

	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
