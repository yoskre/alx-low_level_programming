#include "main.h"
/**
 * _sep - detects if @c is a word seperator
 * @c: char to analyse
 *
 * Return: 1 if yes. 0 otherwise
 */
int _sep(char c)
{
	int i;
	char sep[14] = {'\0', ' ', '\t', '\n', ',', ';', '.',
		'!', '\?', '\"', '(', ')', '{', '}'};
	for (i = 0; i < 14; i++)
		if (sep[i] == c)
			return (1);
	return (0);
}
/**
 * cap_string - capitalizes all words of a string @str
 * @str: string
 *
 * Return: pointer to @str
 */
char *cap_string(char *str)
{
	char *p = str;
	char sep = '\0';
	int cap = 0;

	while (*str)
	{
		if (_sep(sep))
			cap = 1;
		if (cap && (*str >= 'a' && *str <= 'z'))
		{
			*str = *str - ('a' - 'A');
			cap = 0;
		}
		else
		{
			cap = 0;
		}
		sep = *str;
		str++;
	}
	return (p);
}
