#include "lists.h"

/**
 * add_node_end - function to add a node to the end of a list
 * @head: linked list
 * @str: string argument
 * Return: address of newly created node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return NULL;
	newnode->str = strdup(str);
	newnode->next = NULL;
	if ((*head) == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
