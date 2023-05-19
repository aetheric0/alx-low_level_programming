#include <stdio.h>

/**
 * main - Program Starts here
 *
 * Return: return value is 0
 */

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
