#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: argument count
 * @argv: array of string arguments
 * Return: Success (0)
 **/

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
