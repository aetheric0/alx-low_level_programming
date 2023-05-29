#include "main.h"

/**
 * rev_string - prints a string followed by a newline
 * @s: parameter is the variable that hold the string
 * Return: String!
 */

void rev_string(char *s)
{
	int len = 0;
	char *rev;

	rev = s;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len > 0)
	{
		s--;
		*rev += *s;
		len--;
	}
}
