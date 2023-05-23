#include "main.h"

/**
 * print_alphabet - writes the the string _putchar to stdout
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int alpha_lower;

	for (alpha_lower = 97; alpha_lower <= 122; alpha_lower++)
		_putchar(alpha_lower);
	_putchar('\n');
}
