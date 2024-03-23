#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp =  head;
	while (temp->next != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
	free(head);
}
