#include "main.h"
#include <stdio.h>

int main(void)
{
	int i, j;

	j = 0;
	for (i = 1; i <= 50; i++)
	{
		j = j + i;
	}
	_putchar('\n');
	return (0);
}
