#include "main.h"

/**
 * *cap_string - Capitalizes each word in a string
 * @str: string argument
 * Return: Returns capitalized character
 */

char *cap_string(char *str)
{
	int i, a, j;
	char arr[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 13; j++)
		{
			if (str[i] == arr[j])
			{
				a = i + 1;
				if (str[a] >= 'a' && str[a] <= 'z')
				{
					str[a] = str[a] - 32;
					a = i;
				}
			}
		}
	}

	return (str);
}
