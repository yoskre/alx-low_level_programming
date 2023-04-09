#include "main.h"

/**
 * *_strncat - concatenate @n bytes from @src into @dest
 * @dest: destination to be concatenated into
 * @src: to be concatenated
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to result @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*dest)
		dest++;
	while (*src && n)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (p);
}
