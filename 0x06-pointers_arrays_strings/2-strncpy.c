#include "main.h"

/**
 * _strncpy - copies @n bytes from @src to @dest
 * @dest: string to be copied into
 * @src: string to be compied
 * @n: number of bytes to be copied
 *
 * Return: pointer to result @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src && n)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	if (*src == '\0')
		*dest = '\0';
	return (p);
}
