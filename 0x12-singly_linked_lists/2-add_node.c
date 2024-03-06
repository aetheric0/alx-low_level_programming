#include "lists.h"

/**
 * add_node - Function to add node to the beginning of a linked list
 * @head: linked list which we want to add a node at the beginnning
 * @str: string argument to be copied to new node data
 * Return: Address to new node on Success! NULL on failure
 **/


list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;


	return (newnode);
}
