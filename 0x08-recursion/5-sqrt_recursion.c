#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calls a function to find thesquare root
 * sqrt_helper - finds the square root of number n
 * @n: integer argument to find square root
 * @a: number check
 * Return: Returns square root value of n
 **/

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
	if (a * a > n)
		return (-1);
	return (sqrt_helper(n, a + 1));
}
