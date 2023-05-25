#include "main.h"

/**
 * _isupper - checks for uppercase character
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	int i;
	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			c = 1;
		else
			c = 0;
	}
	return (c)
}
