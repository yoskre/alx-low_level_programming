#include "main.h"

/**
 * print_array - prints @n elements of array @a
 * @a: array to be printed
 * @n : number of elements to be printed
 * 
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar(a[i]);
	_putchar('\n');
}
