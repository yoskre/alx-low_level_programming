#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates @n bytes of @s2 in @s1
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of @s2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	s = malloc(sizeof(*s) * (strlen(s1) + strlen(s2) + 1));
	if (!s)
		return (NULL);
	strcpy(s, s1);
	return (strncat(s, s2, n));
}
