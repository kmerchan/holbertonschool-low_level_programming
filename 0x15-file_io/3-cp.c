#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define STDERR STDERR_FILENO

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
	int fd1, fd2, sz1;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0 || buf == NULL)
	{
		dprintf(STDERR, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(STDERR, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	sz1 = read(fd1, buf, 1024);
	write(fd2, buf, sz1);

	free(buf);
	if (close(fd1) < 0)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
