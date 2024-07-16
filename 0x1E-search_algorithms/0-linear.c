#include "search_algos.h"

/**
 * linear_search - Uses linear search algorithm to search for a number in
 * given array
 * @array: array to be searched
 * @size: number of elements in array
 * @value: value to search
 * Return: The index of array on success, NULL on failure
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
