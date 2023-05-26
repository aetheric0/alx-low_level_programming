#include "main.h"

/**
 * print_square - prints a square the size of "size"
 * @size: integer argument to calcualte the size of square
 * Return: Nothing
*/

void print_square(int size)
{
	int i = size;
	int j, k;

	for (j = 0; j < i; j++)
	{
		if (i <= 0)
			_putchar('\n');
		else
		{
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
