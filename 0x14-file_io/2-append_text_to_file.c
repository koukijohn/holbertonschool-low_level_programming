#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text to end of file.
 * @filename: name of file to append.
 * @text_content: NULL terminated string to add to end of file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;

	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[length])
	{
		length++;
	}
	fd = write(fd, text_content, length);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
