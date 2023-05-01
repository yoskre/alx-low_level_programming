#include "lists.h"
#include <stdlib.h>
#include <sys/types.h>
/**
 * free_listint - free a listint_t
 * @head: head of listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head)
		while (head)
		{
			listint_t *pointer = head;

			pointer = head->next;
			free(head);
			head = pointer;
		}
}
