#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts binary number to decimal
 * @b: pointer to memory location containing binary string
 * Return: 0 if the string is null or contains non-binary values,
 * the number in Decimal on success!
 **/


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		sum = (sum * 2) + (b[i] - '0');
	}

	return (sum);
}
