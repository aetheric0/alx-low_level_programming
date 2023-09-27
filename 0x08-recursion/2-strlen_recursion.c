#include "main.h"

/**
 * _strlen_recursion - Returns length of string
 * @s: pointer to access character from string
 * Return: Returns positive integer if successful
 **/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
