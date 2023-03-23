#include "main.h"

/**
 * print_times_table - prints @n time table
 * @n: number to print time table for
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, ij;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				ij = i * j;

				if (j == 0)
					;
				else
				{
					if (((ij / 100) == 0))
						_putchar(' ');
					else
						_putchar('0' + (ij / 100));
					if (((ij / 10) == 0))
						_putchar(' ');
					else
						_putchar('0' + ((ij / 10) % 10));
				}
				_putchar('0' + (ij % 10));
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
}
