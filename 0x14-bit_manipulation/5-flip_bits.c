#include "main.h"
#include <limits.h>

/**
 * flip_bits - determines the number of times we have to flip bits
 * from a number to get the next number
 * @n: decimal number whose bit is to be flipped
 * @m: decimal number whose bit we are flipping to
 * Return: the number of times we have to flip on success
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int iterator, length_n;
	unsigned int counter = 0;

	length_n = sizeof(n) * CHAR_BIT;

	for (iterator = 0; iterator < length_n; iterator++)
	{
		if (((n >> iterator) & 1) != ((m >> iterator) & 1))
			counter++;
	}

	return (counter);
}
