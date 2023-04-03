#include "main.h"
#include <stdio.h>
/**
 * _strchr - find first occurence of @c in @s
 * @s: string
 * @c: character
 *
 * Return: first @c occurence
 */
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (*s == c)
			break;
		s++;
	}
	return (s);
}
