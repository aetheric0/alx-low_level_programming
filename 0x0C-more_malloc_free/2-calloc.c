#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in array
 * @size: size of byte of each element
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *alloc;

	for (i = 0; i < nmemb; i++)
	{
		alloc = malloc(size);
		if (alloc == NULL)
			return (NULL);
		alloc[i] = 0;
	}

	return (alloc);
}
