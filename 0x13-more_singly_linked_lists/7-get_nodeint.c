#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - return nth node of listint_t
 * @head: head of listint_t
 * @index: node number, with 0 as first node
 *
 * Return: listint_t corresponding to @index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
