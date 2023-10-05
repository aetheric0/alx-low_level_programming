#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in array
 * @size: size of byte of each element
 * Return: pointer to array location in memory, NULL on failure
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		alloc[i] = 0;

	return (alloc);
}
