#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates @s1 and @s2
 * @s1: string
 * @s2: string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (!p)
		return (NULL);
	strncpy(p, s1, strlen(s1));
	strcat(p, s2);
	return (p);
}
