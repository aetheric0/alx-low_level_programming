#include "main.h"

/**
 * print_line - prints a line of size n in the terminal
 * @n: takes an integer as argument
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
			_putchar('\n');
		}
	}

}
