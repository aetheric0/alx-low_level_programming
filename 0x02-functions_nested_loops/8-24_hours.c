#include "main.h"

/**
 * jack_bauer - writes the the string _putchar to stdout
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 59; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i == 50 && j > 51)
						;
					else if ((i < 50 && j <= 57) ||
						 (i == 50 && j <= 51))
					{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					}
				}
			}
		}
	}
}
