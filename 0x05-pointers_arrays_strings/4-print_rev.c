#include "main.h"

/**
 * print_rev - prints a string followed by a newline
 * @s: parameter is the variable that hold the string
 * Return: String!
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
