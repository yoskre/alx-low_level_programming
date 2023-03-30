#include "main.h"
/**
 * leet - encode string @str into 1337
 * @str: string
 *
 * Return: pointer to @str
 */
char *leet(char *str)
{
	char *p = str;
	char leet[10][10] = {
			{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
			{'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},};
	int i;

	while (*str)
	{
		for (i = 0; i < 10; i++)
			if (*str == leet[0][i])
			{
				*str = leet[1][i];
				break;
			}
		str++;
	}
	return (p);
}
