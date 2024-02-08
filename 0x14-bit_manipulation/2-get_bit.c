#include "main.h"

/**
 * get_bit - function to get the bit at a given index
 * @n: decimal number
 * @index: index of bit
 * Return: Returns value at index on success, -1 on failure
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bitmask = 1UL << index;

	bit_value = (n & bitmask) ? 1 : 0;

	return (bit_value);

}
