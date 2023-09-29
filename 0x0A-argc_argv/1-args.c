#include <stdio.h>

/**
 * main - Program that prints number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is Success!
 **/

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i = 0;

	while (argc--)
		i++;
	printf("%d\n", i - 1);
	return (0);
}
