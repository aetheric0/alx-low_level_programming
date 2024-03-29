#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: decimal number
 * @index: index number is at
 * Return: 1 on success!, -1 on failure
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
