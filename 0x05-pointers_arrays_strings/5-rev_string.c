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
 * strcp - copies string
 * @src: string to be copied
 * @dest: destination string
 *
 * Return: void
 */
void strcp(char *src, char *dest)
{
	do	{
		*dest = *src;
		src++;
	} while (*(dest++));
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strln(s);
	char stmp[1000];
	int l = len;
	int i = 0;

	strcp(s, stmp);
	while (i < l)
	{
		s[i++] = stmp[--len];
	}
	s[l] = '\0';
}
