#include "main.h"

/**
 * print_line - prints a line of size n in the terminal
 * @n: takes an integer as argument
 * Return: Nothing
 */

void print_line(int n)
{
	int j = n;
	int i;

	for (i = 0; i <= j; i++)
	{
		if (j < 0 || j == 0)
			break;
		_putchar('_');
	}
	_putchar('\n');


}
