#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	while (s1[j] != '\0')
		j++;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			res = 0;
		}
	}

	return (res);
}
