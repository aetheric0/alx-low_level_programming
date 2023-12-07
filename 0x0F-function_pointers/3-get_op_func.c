#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Retrieves operator to determine operation to be carried
 *@s: Operater string argument
 * Return: Returns index of array based on operation
 **/

int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {{"+", op_add}, {"-", op_sub},
		      {"*", op_mul}, {"/", op_div},
		      {"%", op_mod}};

	for (i = 0; i < (int)(sizeof(ops)/sizeof(ops[0])); i++)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return ((ops[i].f));
	}

	return (NULL);
}
