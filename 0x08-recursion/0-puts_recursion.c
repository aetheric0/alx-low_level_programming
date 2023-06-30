#include "main.h"

/**
 * _puts_recursion - prints a string with a new line
 * @s: String argument
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(*s);
	s++;
	i++;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_puts_recursion(s);
	}

	if (i == 0)
		_putchar('\n');
}
