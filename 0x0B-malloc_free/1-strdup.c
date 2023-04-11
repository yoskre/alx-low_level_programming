#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - create array with a copy of @str
 * @str: string to be copied
 *
 * Return: pointer to the copy of @str
 */
char *_strdup(char *str)
{
	char *p;

	if (!str)
		return (NULL);
	p = malloc(strlen(str) + 1);
	if (!p)
		return (NULL);
	strcpy(p, str);
	return (p);
}
