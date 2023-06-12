#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: argument string is copied to
 * @src: argument containing string we want copied
 * @n: max byte of src
 * Return: Returns the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
			dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
