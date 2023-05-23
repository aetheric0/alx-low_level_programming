#include "main.h"

/**
 * print_sign - writes the the string _putchar to stdout
 *
 * @n: receives an int converted to char
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		_putchar(43);
		i = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		i = 0;
	}
	else
	{
		_putchar(45);
		i = -1;
	}
	return (i);
}
