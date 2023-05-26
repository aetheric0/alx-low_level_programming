#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: integer passed as argument to determine length of diagonal
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 1; i < j; j = j + 2)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
