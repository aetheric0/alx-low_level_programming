#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: parameter takes an integer as argument
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			c = 1;
			break;
		}
		else
			c = 0;
	}
	return (c);
}
