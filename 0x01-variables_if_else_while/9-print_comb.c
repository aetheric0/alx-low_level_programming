#include <stdio.h>

/**
 * Main - Entry Point
 *
 * Return: Value of 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
	  if (c == 57)
	    putchar(c);
	  else
	  {
		putchar(c);
		putchar(',');
		putchar(' ');
	  }
	}
	putchar('\n');

	return (0);
}
