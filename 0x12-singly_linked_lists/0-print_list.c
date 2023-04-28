#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print all elements of list_t
 * @h: list_t type list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		cnodes++;
		h = h->next;
	}
	return (cnodes);
}
