#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list
 * @h: the list
 * Return: numbers of elements in the list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = (dlistint_t *)h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
