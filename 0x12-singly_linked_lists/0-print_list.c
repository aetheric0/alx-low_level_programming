#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list
 * @h: pointer to list
 * Return: Number of nodes in list on Success!
 **/

size_t print_list(const list_t *h)
{
	int i = 0;
	size_t len;

	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
		{	len = strlen(h -> str);
			printf("[%ld] %s\n", len, h -> str);
		}
		h = h -> next;
		i++;
	}
	return (i);
}
