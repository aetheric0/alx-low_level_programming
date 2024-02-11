#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 **/

void print_binary(unsigned long int n)
{
	unsigned long int bitmask, start;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	bitmask = 1UL << (sizeof(unsigned long int) * (8));
	start = 0;
	while (bitmask > 0)
	{
		if ((n & bitmask) != 0 || start)
		{
			_putchar((n & bitmask) ? '1' : '0');
			start = 1;
		}
		bitmask = bitmask >> 1;
	}
}
