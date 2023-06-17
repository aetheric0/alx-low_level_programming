#include "main.h"
#include <stdio.h>

/**
 * _strstr - function to locate substring
 * @haystack: string to be searched
 * @needle: set of bytes we want to search
 * Return: Return the matching chars sequentially or null if there are none
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == '\0')
			return (haystack + i);
		for (; needle[j] != '\0'; j++)
		{
			if (haystack[i] ==  ' ')
			{
				i++;
				if (haystack[i] == needle[j])
					return (haystack + i);
			}
		}
	}

	return (NULL);
}
