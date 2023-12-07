#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two numbers
 * op_sub - Subtracts two numbers
 * op_mul - Multiplies two numbers
 * op_div - Divides two numbers
 * op_mod - Finds the modulus of two numbers
 * @a - First operand
 * @b - Second Operand
 **/

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	return (a / b);
}

int op_mod(int a, int b)
{
	return (a % b);
}
