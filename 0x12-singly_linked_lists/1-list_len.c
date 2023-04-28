#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - return number of elements in list_t
 * @h: list_t type list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cnodes = 0;

	while (h)
	{
		cnodes++;
		h = h->next;
	}
	return (cnodes);
}
