#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 (Success!), -1 (Failure)
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return ((access(filename, F_OK) == 0) ? 1 : -1);
	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	if ((write(fd, text_content, len)) == -1)
		return (-1);

	close(fd);
	return (1);
}
