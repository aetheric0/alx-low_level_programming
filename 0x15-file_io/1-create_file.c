#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * create_file - function to create a file
 * @filename: the file to be created
 * @text_content: the content to be written to the file
 * Return: Returns 1 on success!, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	ssize_t length, fd, written;
	char nullbyte = '\0';

	length = strlen(text_content);
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (text_content != NULL)
	{
		written = write(fd, text_content, length);
		if (written == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}

	write(fd, &nullbyte, 1);

	close(fd);
	return (1);
}
