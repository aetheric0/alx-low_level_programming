#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: no of array elements
 * @cmp: pointer to function to be used to compare values
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]))
		{
			index = i;
			break;
		}
		if (i = (size - 1) && !(cmp(array[i])))
			return (-1);
	}

	return (index);
}
