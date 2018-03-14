#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - Reads text file and prints in POSIX standard output.
 * @filename: This is a pointer to the filename.
 * @letters: # of letters that it should read and print. (size)
 *
 * Return: Actual # of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*file descriptor*/
	ssize_t length; /*Actual # of letters it could read and print.*/
	char *buffer;

	if (filename == NULL)
		return (0); /*testing filename*/

	buffer = malloc(sizeof(char) * letters + 1); /* +1 for '\0'*/
	if (buffer == NULL)
		return (0);
/*reading*/
	fd = open(filename, O_RDONLY, 0400);
	if (fd == -1)
		return (0);
	/*getting length*/
	length = read(fd, buffer, letters);
	buffer[letters] = '\0';
	close(fd);
/*writing*/
	fd = write(STDOUT_FILENO, buffer, length);
	if (fd == -1)
	{
		free(buffer);
		return (-1);
	}
	free(buffer);
	return (length);
}
