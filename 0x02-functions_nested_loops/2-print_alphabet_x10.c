#include "main.h"

/**
 * print_alphabet_x10 - writes the the string _putchar to stdout
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int alpha_lower, i, a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			alpha_lower = i;
			_putchar(alpha_lower);
		}
		_putchar('\n');
	}
	return;
}
