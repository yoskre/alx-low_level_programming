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
 * puts_half - prints the second half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strln(str);
	int half;

	if ((len % 2) != 0)
		half = ((len - 1) / 2) + 1;
	else
		half = len / 2;
	while (str[half])
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
