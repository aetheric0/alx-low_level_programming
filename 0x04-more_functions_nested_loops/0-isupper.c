#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: argument takes any any integer
 * Return: success
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
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
