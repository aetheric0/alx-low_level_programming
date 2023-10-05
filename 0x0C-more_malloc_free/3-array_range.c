#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array and initialize
 * it with values from min to max
 * @min: start of range
 * @max: end of range
 * Return: returnz pointer to an array
 **/

int *array_range(int min, int max)
{
	int range, i, *arr;

	if (min > max)
		return (NULL);
	range = max - min;
	if (min == 0)
		range++;
	if (min < 0)
	{
		min = -min;
		range = max + min + 1;
	}

	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++, min++)
		arr[i] = min;
	return (arr);
}
