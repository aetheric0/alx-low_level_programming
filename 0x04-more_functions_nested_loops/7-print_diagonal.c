#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i, j;

	j = 1;
	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			;
		if (i > 0)
		{
			j = i - j;
			if (j < i)
			{
				_putchar(' ');
				j++;
			}

			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
