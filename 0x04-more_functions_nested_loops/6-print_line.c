#include "main.h"

/**
 * print_line - prints a line of size n in the terminal
 * @n: takes an integer as argument
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		putchar('_');
	putchar('\n')
}