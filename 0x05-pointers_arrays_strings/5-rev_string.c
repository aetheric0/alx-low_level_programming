#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter is the variable that hold the string
 * Return: String!
 */

void rev_string(char *s)
{
	int len = 0, i;
	char rev;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		rev = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev;
	}
}
