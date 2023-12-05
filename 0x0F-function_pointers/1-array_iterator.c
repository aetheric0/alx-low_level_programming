#include "function_pointers.h"


/**
 * array_iterator - executes a function on the elements of an array
 * @array: array where elements are stored
 * @size: size of array
 * @action: function pointer
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
