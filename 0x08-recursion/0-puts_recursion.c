#include "main.h"

/**
 * _puts_recursion - prints a string with a new line
 * @s: String argument
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_puts_recursion(s);
	}

}
