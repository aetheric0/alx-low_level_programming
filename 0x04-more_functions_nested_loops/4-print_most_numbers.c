#include "main.h"

/**
 * print_most_numbers - print ASCII digits except 2 and 4
 *
 * Return: void (Nothing)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (!((i == 50) || (i == 52)))
			_putchar(i);
	}
	_putchar('\n');
}
