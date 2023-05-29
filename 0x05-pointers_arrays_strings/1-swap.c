#include "main.h"
#include <stddef.h>

/**
 * swap_int - updates value of pointer
 * @a: first pointer param
 * @b: second pointer param
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int *m = NULL;
	int *n = NULL;
	
	*m = *a;
	*n = *b;
	*a = *n;
	*b = *m;
}
