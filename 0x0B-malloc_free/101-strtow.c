#include "main.h"
#include "stdlib.h"

/**
 * strtow - splits a string into words
 * @str: string argument
 * Return: split words if successful, NULL if failed7
 **/

char **strtow(char *str)
{
	int i, j, len, word_count;
	char **word;

	if (str == "" || str == NULL)
		return (NULL);
	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (str[i] != ' ' && (i = 0 || str[i - 1] = ' '))
			word_count++;
	}

	word = malloc(sizeof(char *) * (word_len * 2) + 1);
	if (word == NULL)
		return NULL
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			word_len++;
	}
	*word = 

}
