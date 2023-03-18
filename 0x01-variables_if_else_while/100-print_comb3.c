#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c1 = '0';
	int c2;

	while (c1 <= '9')
	{

		c2 = c1 + 1;
		while (c2 <= '9')
		{
			putchar(c1);
			putchar(c2);
			if (c1 != '8' || c2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
			c2++;
		}
		c1++;
	}
	putchar('\n');
	return (0);
}
