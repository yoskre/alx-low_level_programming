#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t
 * @head: list_t type list
 * @str: string
 *
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(*node));
	node->str = strdup(str);
	if (node->str == NULL)
		return (NULL);
	node->next = *head;
	*head = node;
	return (*head);
}
