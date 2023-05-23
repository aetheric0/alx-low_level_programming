#include "main.h"

void times_table(void);

int main(void)
{
	times_table();
	return (0)
}

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('\n');
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			_putchar(k + '0');
			if (!(j == 9))
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return;
}
