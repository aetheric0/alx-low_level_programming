#include "main.h"

/**
 * *leet - function that encondes a string to 1337
 * @str: argument that holds the string
 * Return: returns the characters of the formatted string
 */

char *leet(char *str)
{
	int i, j;
	char arr[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L',
		'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (&arr[j] < &arr[10] && str[i] == arr[j])
			{
				str[i] = arr[j + 10];
			}
		}
	}

	return (str);
}
