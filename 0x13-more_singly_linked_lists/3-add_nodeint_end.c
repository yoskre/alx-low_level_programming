#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a node at the end of a listint_t
 * @head: head of listint_t
 * @n: integer
 *
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		listint_t *pointer = *head;

		while (pointer->next)
			pointer = pointer->next;
		pointer->next = node;
	}
	return (*head);
}
