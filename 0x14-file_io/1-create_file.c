#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - This function creates a file.
 * @filename: name of file to create.
 * @text_content: NULL terminated string to write to file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int writetester;
	int length = 0;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
/*0400/S_IRUSR read perm, 0200/S_IWUSR write perm*/
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
		close(fd);
		return (1);
	}
	while (text_content[length])
	{
		length++;
	}
	writetester = write(fd, text_content, length);
	if (writetester == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1); /*Success :)*/
}
