#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all elements of listint_t
 * @h: list_t type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
