#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - function to create a file
 * @filename: the file to be created
 * @text_content: the content to be written to the file
 * Return: Returns 1 on success!, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int len;
	ssize_t fd, written;
	char *buffer;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	len = strlen(text_content);
	buffer = (char *)malloc(sizeof(char) * len);

	if (text_content != NULL)
	{
		written = write(fd, buffer, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	free(buffer);
	return (1);
}
