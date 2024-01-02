#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two numbers
 * @a: First operand
 * @b: Second Operand
 * Return: Sum of operands
 **/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Subtracts two numbers
* @a: First operand
* @b: Second Operand
* Return: Difference of operands
**/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - Multiplies two numbers
* @a: First operand
* @b: Second Operand
* Return: Product of operands
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - Divides two numbers
* @a: First operand
* @b: Second Operand
* Return: Quotient of Operands
**/

int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - Finds the modulus of two numbers
* @a: First operand
* @b: Second Operand
* Return: Modulus of Operands
**/
int op_mod(int a, int b)
{
	return (a % b);
}
