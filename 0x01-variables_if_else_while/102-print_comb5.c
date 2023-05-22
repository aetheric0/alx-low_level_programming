#include <stdio.h>

/**
 * main - Program Starts here
 *
 * Return: return value is 0
 */

int main(void)
{
	int c, j, k, l;

	for (c = 48; c <= 57; c++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if ((j < l) && j != l)
					{
						putchar(c);
						putchar(j);
						putchar(k);
						putchar(l);
						if (!(c == 54 && j == 55 &&
 k == 56 && l == 57))
                                                {
                                                        putchar(',');
                                                        putchar(' ');
                                                }
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
