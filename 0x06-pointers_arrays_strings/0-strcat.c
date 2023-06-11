#include "main.h"
/**
 * _strcat -  Function to concatenate two strings
 * @dest: first pointer argument
 * @src: second pointer argument
 * Return -  Type Char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k, len;

	i = 0;
	while (dest[i] != '\0')
		i++;
	src = &dest[i+1];

	j = 0;
	while (src[j] != '\0')
		j++;
	j++;

	len = i + j;

	k = 0;
	for (k = 0; k < len; k++)
		dest = &dest[0 + k];

	return (dest);
}
