#include "main.h"

/**
 * times_table - writes the the string _putchar to stdout
 *
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
        int i, j, k;

        for (i = 0; i <= 9; i++)
        {
                _putchar('\n');
                for (j = 0; j <= 9; j++)
                {
                        k = i * j;
                        if (k > 9)
                        {
                                _putchar(k / 10 + '0');
                                _putchar(k % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
                        }
                        else
                        {
				_putchar(k + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
                }
        }
        _putchar('\n');
        return;
}
