#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves a node at an index in a list
 * @head: pointer to list
 * index: index of node
 * Return: address of node at index on success, NULL on failure
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	temp = head;
	if (temp == NULL)
		return NULL;
	while (n != index && temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
