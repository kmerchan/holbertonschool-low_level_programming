#include "holberton.h"

/**
 * create_file - function to create text file
 * @filename: input name for the created file
 *
 * @text_content: input null-terminated text for the file
 *
 * Return: 1 if successful, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size, text_size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[text_size])
		text_size++;

	size = write(fd, text_content, text_size);

	if (size < 0)
		return (-1);

	if (close(fd) < 0)
		return (-1);

	return (1);
}
