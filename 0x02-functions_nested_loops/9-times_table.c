#include "main.h"

/**
 *times_table - Prints the 9 times table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('\n');
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (!(j > 9 || j == 0))
			{
			_putchar(',');
			_putchar(' ');
			}
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				if (!(j > 9))
					_putchar(' ');
			}
			else
				_putchar(k + '0');
		}
	}
	_putchar('\n');
}
