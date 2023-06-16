#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	*s = b;
	for (i = 0; i < n; i++)
	{
		s[i] = *s;
	}

	return (s);
}
