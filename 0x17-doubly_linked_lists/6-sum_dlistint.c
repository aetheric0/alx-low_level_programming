#include "lists.h"

/**
 * sum_dlistint(dlistint_t *head)
 * @head: pointer to the list
 * Return: return sum of of data part in list on success, 0 if empty
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
