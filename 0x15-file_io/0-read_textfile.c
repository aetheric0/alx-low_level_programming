#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>


/**
 * read_textfile - function to read text file and print to POSIX stdout
 * @filename: file to be read
 * @letters: letters to be read from file
 * Return: Returns numbers of letters read on success, 0 on failure
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = NULL;
	size_t i, counter;
	char ch;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	for (i = 0; i < letters; i++)
	{
		ch = fgetc(fp);
		write(STDOUT_FILENO, &ch, 1);
		counter++;
	}

	if (counter != letters)
		return (0);

	fclose(fp);
	return (counter);
}
