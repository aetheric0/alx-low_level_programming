#include "lists.h"

/**
 * list_len - Returns the length of a linked list
 * @h: linked list argument
 * Return: length of linked list on Success!
 **/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return(i);
}
