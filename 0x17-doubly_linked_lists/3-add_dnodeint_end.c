#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a doubly linked list
 * @head: pointer to list
 * @n: value of new node
 * Return: address of newnode on success, NULL on failure
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		newnode->next = NULL;
	}

	return (newnode);
}
