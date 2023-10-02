#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the passed string to a new memory
 * @str: string argument
 * Return: Pointer to copied string if successful, NULL if failed
 **/

char *_strdup(char *str)
{
	int i, count = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	arr = malloc(sizeof(char) * count);
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];
	return (arr);
}
