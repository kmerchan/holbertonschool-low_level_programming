#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define STDERR STDERR_FILENO

void cant_read(char *s);
void cant_write(char *s);
void cant_close(int fd);

/**
 * main - function to copy contents of one file to another
 * @argc: int count of how many arguments were passed to function
 *
 * @argv: double pointer to string of arguments to function
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t sz1, sz2;
	char *buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
		return (-1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
		cant_read(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 < 0)
		cant_write(argv[2]);

	sz1 = read(fd1, buf, 1024);
	if (sz1 < 0)
		cant_read(argv[1]);

	sz2 = write(fd2, buf, sz1);
	if (sz2 < 0)
		cant_write(argv[2]);


	while (sz1 == 1024)
	{
		sz1 = read(fd1, buf, 1024);
		if (sz1 < 0)
			cant_read(argv[1]);
		sz2 = write(fd2, buf, sz1);
		if (sz2 < 0)
			cant_write(argv[2]);
	}
	free(buf);

	if (close(fd1) < 0)
		cant_close(fd1);
	if (close(fd2) < 0)
		cant_close(fd2);

	return (0);
}

/**
 * cant_read - prints error message and exits if file_from can't be read
 * @s: input string referring to file_from name
 *
 */

void cant_read(char *s)
{
	dprintf(STDERR, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * cant_write - prints error message and exits if can't write to file_to
 * @s: input string referring to file_to name
 *
 */

void cant_write(char *s)
{
	dprintf(STDERR, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * cant_close - prints error message and exits if cannot close file
 * @fd: input int value of file
 *
 */

void cant_close(int fd)
{
	dprintf(STDERR, "Error: Can't close fd %d\n", fd);
	exit(100);
}
