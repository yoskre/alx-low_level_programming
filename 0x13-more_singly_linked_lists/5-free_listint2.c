#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free a listint_t and sets head to NULL
 * @head: head of listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head)
		while (*head)
		{
			listint_t *pointer = (*head)->next;

			free(*head);
			*head = pointer;
		}
}
