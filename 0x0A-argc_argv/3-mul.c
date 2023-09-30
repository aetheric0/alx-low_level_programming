#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is Success!
 **/

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
