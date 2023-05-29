#include "main.h"

/**
 * swap_int - updates value of pointer
 * @a: first pointer param
 * @b: second pointer param
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int *m = *a;
	int *n = *b;

	*a = *n;
	*b = *m;
}
