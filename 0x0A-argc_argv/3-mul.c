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
	int MUL = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		MUL *= atoi(argv[i]);
	}
	printf("%d\n", MUL);
	return (0);
}
