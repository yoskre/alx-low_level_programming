#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line;
		int space;

		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
