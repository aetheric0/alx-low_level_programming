#include "main.h"

/**
 * _puts_recursion - prints string followed by newline
 * @s: string passed
 **/

void _puts_recursion(char *s)
{
	if ( *s == '\0')
		return;
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
