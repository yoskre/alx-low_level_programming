#include "main.h"
/**
 * rot13 - encode @str using rot13
 * @str: string
 *
 * Return: pointer to @str
 */
char *rot13(char *str)
{
	char *p = str;
	char io[52][52] = {
			{'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
			'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z'},
			{'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
			'B', 'C', 'D', 'E', 'F', 'G', 'H',
			'I', 'J', 'K', 'L', 'M', 'n', 'o',
			'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm'}};

	while (*str)
	{
		int i;

		for (i = 0; i < 52; i++)
			if (io[0][i] == *str)
			{
				*str = io[1][i];
				break;
			}
		str++;
	}
	return (p);
}
