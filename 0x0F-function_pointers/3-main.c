#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - Performs simple arithmetic operations using only two operands
 * argc - argument count
 * argv - string argument
 **/

int main(int argc, char *argv[])
{
	int a, b, (*op_func)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	op_func = get_op_func(s);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(s, "/") == 0 || strcmp(s, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
