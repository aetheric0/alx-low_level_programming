#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 **/

void *malloc_checked(unsigned int b)
{
	int *alloc;

	alloc = malloc(sizeof(unsigned int) * b);
	if (alloc == NULL)
		exit(98);

	return (alloc);
}
