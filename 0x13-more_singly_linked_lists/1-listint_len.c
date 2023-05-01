#include "lists.h"
/**
 * listint_len - return length of listint_t
 * @h: list_t type listint_t
 *
 * Return: length of listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
