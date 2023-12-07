#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Retrieves operator to determine operation to be carried
 *@s: Operater string argument
 * Return: Returns index of array based on operation
 **/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub},
		      {"*", op_mul}, {"/", op_div},
		      {"%", op_mod}};
	if (strcmp(s, "+"))
		return ops[0].f;
	else if (strcmp(s, "-"))
		return ops[1].f;
	return (NULL);
}
