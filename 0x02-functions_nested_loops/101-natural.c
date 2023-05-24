#include "main.h"
/**
 * print_nat- function that adds and prints the number
 *
 * Return: Nothing
*/

void print_nat(void)
{
	int i, j, c, k;

	i = 0;
	j = 0;
	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			j = j + i;
		}
		i++;
	}
	for (c = 100000; c >= 1; c = c / 10)
	{
		k = j / c;
		if (k < 9)
			_putchar(k + '0');
		if (k > 9)
		{
			k = k % 10;
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
