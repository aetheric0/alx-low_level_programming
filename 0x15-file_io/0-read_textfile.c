#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>


/**
 * read_textfile - function to read text file and print to POSIX stdout
 * @filename: file to be read
 * @letters: letters to be read from file
 * Return: Returns numbers of letters read on success, 0 on failure
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reader, counter;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);
		counter = 0;
		while ((reader = read(fd, buffer, letters)) > 0)
		{
			counter = write(STDOUT_FILENO, buffer, letters);
			if (counter == -1)
			{
				close(fd);
				free(buffer);
				return (0);
			}
		}

	if (reader != counter)
		return (0);

	free(buffer);
	close(fd);
	return (counter);
}
