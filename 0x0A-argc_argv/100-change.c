#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that prints how much change is needed to the number
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise.
 **/
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if(atoi(argv[1][i] < 0))
			{
				printf("0\n");
			}
	}
	return (0)
}
