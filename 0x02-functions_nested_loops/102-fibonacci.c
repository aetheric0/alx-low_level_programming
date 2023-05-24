#include "main.h"
#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: 0 is success
 */
int main(void)
{
	int i, j;

	j = 0;
	for (i = 1; i <= 50; i++)
	{
		j = j + i;
		printf("%d, ", j);
		j = i;
	}
	_putchar('\n');
	return (0);
}
