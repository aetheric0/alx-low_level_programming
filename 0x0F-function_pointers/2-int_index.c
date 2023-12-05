#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: no of array elements
 * @cmp: pointer to function to be used to compare values
 * Return: Returns int value of index if successful, -1 on failure
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			index = i;
			break;
		}
		else
			index = -1;
	}

	return (index);
}
