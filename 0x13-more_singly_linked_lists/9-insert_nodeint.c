#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint - insert a node between @pa and @pb
 * @pa: listint_t node
 * @pb: listint_t node
 * @n: integer
 *
 * Return: new node, or NULL at fail
 */
listint_t *insert_nodeint(listint_t *pa, listint_t *pb, int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (node);
	node->n = n;
	if (pa != NULL)
		pa->next = node;
	node->next = pb;
	return (node);
}
/**
 * insert_nodeint_at_index - insert a node before position @idx of listint_t
 * @head: head of listint_t
 * @idx: position of new node, 0 is beginning
 * @n: integer
 *
 * Return: new node, NULL if error
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (*head != NULL)
	{
		unsigned int i;
		listint_t *pointer = *head;

		if (idx == 0)
			return (*head = insert_nodeint(NULL, pointer, n));
		for (i = 0; i < idx && pointer != NULL; i++)
		{
			if (((i + 1) == idx) && (pointer->next != NULL))
				return (insert_nodeint(pointer, pointer->next, n));
			pointer = pointer->next;
		}
	}
	else
		return (*head = insert_nodeint(NULL, NULL, n));
	return (NULL);
}
