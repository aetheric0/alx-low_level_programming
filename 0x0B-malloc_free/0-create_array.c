#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it to c
 * @c: char to fill the array
 * @size: size of array
 * Return: char c or NULL
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
	free(arr);
}
