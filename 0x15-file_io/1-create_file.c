#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define BUFFSIZE 1024

/**
 * create_file - function to create a file
 * @filename: the file to be created
 * @text_content: the content to be written to the file
 * Return: Returns 1 on success!, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;

	if (filename == NULL)
		return (-1);

	if ((access(filename, F_OK)) != 0 )
	{
		fd = open(filename, O_RDWR, 0600);
		if (fd == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_RDWR | O_TRUNC);
		if (fd == -1)
			return (-1);
	}
	if (text_content != NULL)
	{
		if ((write(fd, text_content, BUFFSIZE)) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
