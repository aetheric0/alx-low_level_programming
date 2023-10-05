#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: Returns void pointer to memory address of allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(sizeof(unsigned int) * b);
	if (alloc == NULL)
		exit(98);

	free(alloc);
	return (alloc);
}
