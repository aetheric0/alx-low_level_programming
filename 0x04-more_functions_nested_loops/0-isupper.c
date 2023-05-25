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
			return (1);
		}
		else
			return (0);
}
