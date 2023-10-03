#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments in a program
 * @ac: number of arguments
 * @av: string arguments
 * Return: On Success returns pointer to the string, Returns NULL on failure
 **/

char *argstostr(int ac, char **av)
{
	int len, i, j, k;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	string = (char *)malloc(sizeof(char) * (len + ac + 1));
		if (string == NULL)
		{
			free(string);
			return (NULL);
		}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';

	return (string);
}
