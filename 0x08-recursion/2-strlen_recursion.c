#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: pointer to access character from string
 * Return: Returns positive integer if successful
 **/

int _strlen_recursion(char *s)
{
	static int i = 0;

	if (s[i] == '\0')
		return (i);
	else
	{
		i++;
		return _strlen_recursion(s++);
	}
}
