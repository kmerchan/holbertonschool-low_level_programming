#include "holberton.h"

/**
 * read_textfile - function to read text from file and print to stdout
 * @filename: input name of file to read text from
 *
 * @letters: input number of bytes expected to read/print
 *
 * Return: number of bytes actually read/printed or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz1, sz2;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sz1 = read(fd, buf, letters);
	buf[sz1] = '\0';
	sz2 = write(STDOUT_FILENO, buf, sz1);
	free(buf);
	if (close(fd) < 0)
		return (0);
	return (sz2);
}
