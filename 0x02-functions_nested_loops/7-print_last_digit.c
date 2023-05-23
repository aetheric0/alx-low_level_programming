#include "main.h"

/**
 * print_last_digit - writes the the string _putchar to stdout
 *
 * @a: receives an int converted to char
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int a)
{
	int b = 0;

	if (a < 0)
	{
		b = -1 * a;
		b = b % 10;
		if (b == 0)
			putchar('0');
		else
			_putchar(b + '0');
	}

	else if (a > 0)
	{
		b = a % 10;
		_putchar(b + '0');
	}
	else
		_putchar('0');

	return (b);
}
