#include "lists.h"

/**
 * add_dnodeint -  adds a node to the beginning of a list
 * @head: linked list
 * @n: value at node
 * Return: address of new element (Success!), NULL on failure
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	else
	{
		temp = (*head)->next;
		(*head)->next = newnode;
		newnode->prev = *head;
		newnode->next = temp;
	}
	newnode->n = n;
	return (newnode);
}
