#include "main.h"

/**
 * *string_toupper - function that changes lower case characters to uppercase
 * @*: argument containing the character to change
 * Return: returns converted character
 */

char *string_toupper(char *s)
{
	int i;
	char a;

	for(i = 0; s[i] != '\0'; i++)
	{
		for(a = 97; a <= 122; a++)
		{
			if (s[i] == a)
			{
				s[i] = a - 32;
			}
		}
	}

	return (s);
}
