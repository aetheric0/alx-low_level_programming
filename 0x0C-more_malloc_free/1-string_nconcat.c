#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates characters in s1 and n bytes characters from s2
 * @s1: first string argument
 * @s2: second string argument
 * @n: size of bytes to by copied from s2
 * Return: pointer to concatenated string on success, NULL on failure
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, len = 0;
	char *concat;

	len = strlen(s1);

	len += sizeof(n);

	concat = malloc(sizeof *concat * len + 1);
	if (concat == NULL)
		return (NULL);

	k = 0;
	for (i = 0; s1[i] != '\0'; i++, k++)
		concat[k] = s1[i];
	for (i = 0; i < n; i++, k++)
		concat[k] = s2[i];
	concat[k] = '\0';

	return (concat);
}
