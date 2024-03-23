#include "lists.h"

/**
 * add_dnodeint -  adds a node to the beginning of a list
 * @head: linked list
 * @n: value at node
 * Return: address of new element (Success!), NULL on failure
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
