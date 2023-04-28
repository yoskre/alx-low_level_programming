#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: list_t type list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p = head;

	if (p)
		while (p)
		{
			free(p->str);
			free(p);
			head = p->next;
			p = head;
		}
}
