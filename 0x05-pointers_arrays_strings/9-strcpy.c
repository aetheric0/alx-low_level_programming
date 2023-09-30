#include "main.h"

/**
 * _strcpy - copies the string including the null terminator
 * @dest: destination string is copied to
 * @src: source it is copied from
 * Return: 0 is Success!
 **/

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;
	char s[] = "";

	for (i = 0; src[i] != '\0'; i++)
		j++;
	if (*src == *s)
		dest = src;
	else
	{
	j++;
	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	}
	return (dest);
}
