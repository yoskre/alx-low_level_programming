#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_node - create list_t node
 * @str: string
 *
 * Return: list_t
 */
list_t *create_node(const char *str)
{
	list_t *node;

	node = malloc(sizeof(*node));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	if (!node->str)
	{
		free(node->str);
		free(node);
		return (NULL);
	}
	return (node);
}
/**
 * add_node_end - add a new node at the end of a list_t
 * @head: list_t type list
 * @str: string
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = create_node(str);

	if (!node)
		return (NULL);
	node->next = NULL;
	if (*head)
	{
		list_t *p = *head;

		while (p->next)
			p = p->next;
		p->next = node;
	}
	else
		*head = node;
	return (*head);
}
