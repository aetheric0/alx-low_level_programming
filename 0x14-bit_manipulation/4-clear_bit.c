#include "main.h"

/**
 * clear_bit - modifies the value bit at index to be 0
 * @n: decimal number
 * @index: position of bit
 * Return: 1 on success!, -1 on failure.
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);

	*n &= mask;

	return (1);
}
