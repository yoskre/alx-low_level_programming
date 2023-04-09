#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination to be concatenated into
 * @src: to be concatenated
 *
 * Return: pointer to result @dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p);
}
