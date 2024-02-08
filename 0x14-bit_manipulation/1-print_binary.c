#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 **/

void print_binary(unsigned long int n)
{
	unsigned int bitmask;
	int start;

	if (n == 0)
		_putchar('0');

	bitmask = 1UL << (sizeof(unsigned int) * (8 - 1));
	start = 0;
	while (bitmask > 0)
	{
		if ((n & bitmask) != 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
			_putchar('0');
		bitmask = bitmask >> 1;
	}
}
