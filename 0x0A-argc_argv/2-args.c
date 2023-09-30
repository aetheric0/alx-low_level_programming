#include <stdio.h>

/**
 * main - Program that prints all arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is Success!
 **/

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
