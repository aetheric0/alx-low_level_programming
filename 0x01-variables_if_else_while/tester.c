#include <stdio.h>

int main(void)
{
	int i, j, k;

	for(i = 48; i <= 57; i++)
		for (j = 48; j <= 57; j++)
			for(k = 48; k <= 57; k++)
			{
				if ( (i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				else
					;
			}
	return (0);
}
