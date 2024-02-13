#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BUFFSIZE 1024

/**
 * close_file - checks if close system call properly executes
 * @file: file descriptor
 **/

void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}
}

/**
 * main - copies content of a file to another
 * @argc: argument count
 * @argv: file arguments
 * Return: 0 (Success!)
 **/

int main(int argc, char *argv[])
{
	int file1, file2, reader, writer;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	buffer = (char *)malloc(sizeof(char) * BUFFSIZE);
	while ((reader = read(file1, buffer, BUFFSIZE)) > 0)
	{
		writer = write(file2, buffer, reader);
		if (writer != reader)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		free(buffer);
		exit(99);
		}

	}
	close_file(file1);
	close(file2);
	free(buffer);
	return (0);
}
