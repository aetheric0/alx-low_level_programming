#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloactes memory assigned by malloc to new memory address
 * @ptr: memory address to be reallocated
 * @old_size: size of old memory
 * @new_size: size of new memory to be allocated
 * Return: pointer to new address
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_alloc;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		new_alloc = malloc(new_size);
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_alloc = malloc(new_size);
		if (new_alloc == NULL)
			return (NULL);
		memcpy(new_alloc, ptr, old_size);
		free(ptr);
	}

	return (new_alloc);
}
