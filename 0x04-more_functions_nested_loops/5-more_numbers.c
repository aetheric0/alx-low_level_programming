#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 - 14
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 9)
				j = j * 10;
		}
	}
	
}
