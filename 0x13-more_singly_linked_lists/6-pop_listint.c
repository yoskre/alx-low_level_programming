#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete head of listint_t
 * @head: head of listint_t
 *
 * Return: deleted listint_t node’s data
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head)
	{
		listint_t *pointer = (*head)->next;

		data = (*head)->n;
		free(*head);
		*head = pointer;
	}
	return (data);
}
