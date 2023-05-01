#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a node at the beginning of a listint_t
 * @head: head of listint_t
 * @n: integer
 *
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}
	return *head;
}
