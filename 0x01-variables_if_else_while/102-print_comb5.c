#include <stdio.h>

/**
 * main - Program Starts here
 *
 * Return: return value is 0
 */

int main(void)
{
	int c, j, k;

	for (c = 48; c <= 57; c++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(' ');
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if ((c == j && j == k) ||
(c > j && j > k) ||(c > j && j < k) || (c > j && j == k) || (c == j && j > k) ||
(c == j && j < k) || (c == k && j < k) || (c == k && j > k) || (c < j && j == k)
||(c < k && k == j) || (c < j && j > k))
						;
					else
					{
						putchar(c);
						putchar(j);
						putchar(k);

						if (!(c == 55 && j == 56 && k == 57))
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
