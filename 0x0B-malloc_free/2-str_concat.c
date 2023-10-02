#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: second string to be added to the first string
 * Return: Returns pointer to string on success, NULL on failure
 **/

char *str_concat(char *s1, char *s2)
{
	int s1_length = 0, length = 0, i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[length] != '\0')
		length++;

	length += s1_length;
	length = length + 1; /* NULL byte */
	string = malloc(sizeof(char) * length);
	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[length] = '\0';

	return (string);
}
