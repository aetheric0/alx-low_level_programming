#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BUFFSIZE 1024

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
	buffer = (char *)malloc(sizeof(char) * strlen(argv[1]));
	if ((file1 = open(argv[1], O_RDONLY)) == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
	if ((file2 = open(argv[2], O_RDWR | O_CREAT, 0664)) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((reader = read(file1, buffer, BUFFSIZE)) > 0)
		if ((writer = write(file2, buffer, reader)) != reader)
		{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s", argv[2]);
		exit(99);
		}

	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file1);
		exit(100);
	}
	close(file1);
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file2);
		exit(100);
	}
	close(file2);
	return (0);
}
