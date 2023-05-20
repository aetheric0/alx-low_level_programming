#include <stdio.h>

/**
 * main - Program Starts here
 *
 * Return: return value is 0
 */

int main(void)
{
	int c, j;

	for (c = 48; c <= 57; c++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (c > j || c == j)
				;
			else
			{
				putchar(c);
				putchar(j);

				if (!(c == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
