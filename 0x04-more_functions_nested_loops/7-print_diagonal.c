#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: integer passed as argument to determine length of diagonal
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n == 0)
	{
		putchar('\n')
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
