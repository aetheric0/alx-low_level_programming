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
	int i = 0;
	op_t ops[] = {{"+", op_add}, {"-", op_sub},
		      {"*", op_mul}, {"/", op_div},
		      {"%", op_mod}};
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
