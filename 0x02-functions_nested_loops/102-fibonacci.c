#include "main.h"

int main(void)
{
	int i, j;

	j = 0;
	for (i = 1; i <= 50; i++)
	{
		j = j + i;
		if (j < 9)
			_putchar(j + '0');
		else if (j > 9)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
