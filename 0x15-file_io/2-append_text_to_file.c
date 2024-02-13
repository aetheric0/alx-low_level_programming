#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 (Success!), -1 (Failure)
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content != NULL)
       		w = write(fd, text_content, 1);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
