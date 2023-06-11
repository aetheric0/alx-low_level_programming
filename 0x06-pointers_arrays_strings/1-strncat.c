#include "main.h"
/**
 * _strncat -  Function to concatenate two strings
 * @dest: first pointer argument
 * @src: second pointer argument
 * Return -  Type Char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, len;

	i = 0;
	while (dest[i] != '\0')
		i++;

	src = &dest[i];

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		j++;
	}

	len = i + j;

	k = 0;
	for (k = 0; k < len; k++)
	{
		if (dest[k] == '\0')
		{
			;
		}
		else
		{
			dest = &dest[0 + k];
		}
	}

	return (dest);
}
