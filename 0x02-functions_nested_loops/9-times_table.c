#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int ij = i * j;

			if (j == 0)
				;
			else
			{
				if (((ij / 10) == 0))
					_putchar(' ');
				else
					_putchar('0' + (ij / 10));
			}
			_putchar('0' + (ij % 10));
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
