#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * sum_listint - return sum of all data of listint_t
 * @head: head of listint_t
 *
 * Return: sum of all listint_t data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	return (sum);
}
