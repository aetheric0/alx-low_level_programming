#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Finds the square root of the number n
 * @n: integer argument to find square root
 * Return: Returns square root value of n
 **/

int _sqrt_recursion(int n)
{
	int a = 0;
	int sqrt = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	a = n / 2;
	sqrt = _sqrt_recursion(n - a * a);

	if (sqrt != -1 && sqrt * sqrt == n)
		return (a);
	if (a * a > n)
		return (_sqrt_recursion(n - (a - 1) * (a - 1)));
	else
		return sqrt;
}
