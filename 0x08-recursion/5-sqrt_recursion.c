#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calls a function to find thesquare root
 * @n: integer argument to find square root
 * Return: Returns square root value of n
 **/

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Finds the square root of n
 * @n: number whose square root is to be determined
 * @a: number check
 * Return: Returns square root value
 **/

int sqrt_helper(int n, int a)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	if (n / a == a)
	{
		return (a);
	}
	if (a * a > n)
		return (-1);
	return (sqrt_helper(n, a + 1));
}
