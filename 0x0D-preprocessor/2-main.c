#include "main.h"
#include <stdio.h>

/**
 * main - printd name of file
 * Return: (0) on success!
 **/

int main(void)
{
	int i;
	char *c;

	c = __FILE__;
	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
