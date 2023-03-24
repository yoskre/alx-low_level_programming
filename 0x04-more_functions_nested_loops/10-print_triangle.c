#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int height;
		int hash;
		int space;

		for (height = 1; height <= size; height++)
		{
			hash = height;
			space = size - hash;
			while (space--)
				_putchar(' ');
			while (hash--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
