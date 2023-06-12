#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
		else
			dest[i] = dest[i];
	}
	dest[i] = '\0';

	return (dest);
}
