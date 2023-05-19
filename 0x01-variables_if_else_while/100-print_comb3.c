#include <stdio.h>

int main(void)
{
	int c,j;

	for (c = 48; c <= 57; c++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(c);
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
