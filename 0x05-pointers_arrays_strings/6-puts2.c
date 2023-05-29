#include "main.h"

/**
 * puts2 - prints a string followed by a newline
 * @str: parameter is the variable that hold the string
 * Return: String!
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
