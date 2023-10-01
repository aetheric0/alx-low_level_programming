#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Finds the square root of the number n
 * @n: integer argument to find square root
 * Return: Returns square root value of n
 **/

int sqrt_helper(int, int);

int _sqrt_recursion(int n)
{
	return sqrt_helper(n, 1);
}

int sqrt_helper(int n, int a)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	if (n/a == a)
	{
		return (a);
	}
	if ( a * a > n)
		return (-1);
	else
	{
		return sqrt_helper(n, a + 1);
	}
}
