#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t
 * @head: list_t type list
 * @str: string
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
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
	node->next = *head;
	*head = node;
	return (*head);
}
