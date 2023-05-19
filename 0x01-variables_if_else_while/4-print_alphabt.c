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
		if ( c == 101 || c == 113)
			;
		else
			putchar(c);
	putchar('\n');

	return (0);
}
