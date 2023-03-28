#include "main.h"

/**
 * strln - returns length of a string
 * @s: string to be measured
 *
 * Return: length of @s
 */
int strln(char *s)
{
	int l = 0;

	while (*(s++))
		l++;
	return (l);
}

/**
 * _strcpy - copies string
 * @dest: destination string
 * @src: string to be copied
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len = strln(src);
	int i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
