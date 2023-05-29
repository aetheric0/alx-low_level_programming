#include "main.h"

/**
 * swap_int - updates value of pointer
 * @a: first pointer param
 * @b: second pointer param
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int *m = 0;
	int *n = 0;

	*m = *a;
	*n = *b;

	*a = *n;
	*b = *m;
}
