#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * exit_98 - prints error message with exit status of 98
 * @fd: File descriptor.
 *
 */

void exit_98(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd);
	exit(98);
}

/**
 * exit_99 - prints error message with exit status of 99
 * @fd: File descriptor
 *
 */

void exit_99(char *fd)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd);
	exit(99);
}

/**
 * exit_100 - prints error message with exit status of 100.
 * @fd: File descriptor.
 *
 */

void exit_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - This function copies content of file to another file.
 * @argc: This is our arument count.
 * @argv: This is our argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, reader, writer, closer;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
/*opening*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		exit_98(argv[1]);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		exit_99(argv[2]);
	}
/*reading and writing*/
	reader = read(file_from, buffer, 1024);
	while (reader != 0)
	{
		if (reader == -1)
			exit_98(argv[1]);
		writer = write(file_to, buffer, reader);
		if (writer == -1)
			exit_99(argv[2]);
	}
/*closing*/
	closer = close(file_from);
	if (closer == -1)
		exit_100(file_from);
	closer = close(file_to);
	if (closer == -1)
		exit_100(file_to);
	return (0);
}
