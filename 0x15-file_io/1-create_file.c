#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - function to create a file
 * @filename: the file to be created
 * @text_content: the content to be written to the file
 **/

int create_file(const char *filename, char *text_content)
{
	ssize_t length, fd, written;
	char nullbyte = '\0';

	if (filename == NULL)
		return (-1);
	length = strlen(text_content);
	if (text_content == NULL)
	{
		fd = open(filename, 1 << 1 | O_CREAT | O_TRUNC);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, 1 << 1 | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (-1);

	while (*text_content != '\0')
	{
		written = write(fd, text_content, length);
		text_content++;
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	write(fd, &nullbyte, 1);

	close(fd);
	return (1);
}
