#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: pointer to list
 * @idx: index node is to be inserted
 * @n: value of data part of node
 * Return: Address of inserted node on success, NULL on failure
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int i = 0;

	temp = *h;
	if (temp == NULL)
		return NULL;
	while (i != idx && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return NULL;
	newnode->n = n;
	newnode->next = temp;
	newnode->prev = temp->prev;
	(temp->prev)->next = newnode;

	return (newnode);
}
