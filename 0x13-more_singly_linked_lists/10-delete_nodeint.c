#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint - delete node @pb
 * @pa: listint_t node before @pb
 * @pb: listint_t node
 *
 * Return: void
 */
void delete_nodeint(listint_t *pa, listint_t *pb)
{
	if (pa != NULL)
	{
		if (pb->next != NULL)
			pa->next = pb->next;
		else
			pa->next = NULL;
	}
	free(pb);
}
/**
 * delete_nodeint_at_index - insert a node at position @idx of listint_t
 * @head: head of listint_t
 * @index: position of new node, 0 is beginning
 *
 * Return: new node, NULL if error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head != NULL)
	{
		unsigned int i;
		listint_t *pointer = *head;

		if (index == 0)
		{
			delete_nodeint(NULL, pointer);
			*head = NULL;
			return (1);
		}
		for (i = 0; i < index && pointer != NULL; i++)
		{
			if (i + 1 == index && pointer->next != NULL)
			{
				delete_nodeint(pointer, pointer->next);
				return (1);
			}
			pointer = pointer->next;
		}
	}
	return (-1);
}
