#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y.
 * @x: Base number
 * @y: Exponent
 * Return: Returns the value of x ^ y
 **/

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
