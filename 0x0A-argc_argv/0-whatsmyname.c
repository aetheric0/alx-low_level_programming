#include "main.h"

/**
 * main - Program that prints its name
 @argc: argument count
 @argv: array of string arguments
 Return: Success (0);
 **/

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;
	if (argv[0])
	{
		for (i = 0; argv[0][i] != '\0'; i++)
			_putchar(argv[0][i]);
		_putchar('\n');
	}
}
