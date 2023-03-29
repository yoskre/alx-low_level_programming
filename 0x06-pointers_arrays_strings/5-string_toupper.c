#include "main.h"

/**
 * string_toupper - change lowercase letters of @s to uppercase
 * @s: string
 *
 * Return: pointer to @s
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - ('a' - 'A');
		s++;
	}
	return (p);
}
