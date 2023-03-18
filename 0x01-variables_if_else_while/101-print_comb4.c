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
	int c3;

	while (c1 <= '9')
	{

		c2 = c1 + 1;
		while (c2 <= '9')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				putchar(c1);
				putchar(c2);
				putchar(c3);
				if (c1 != '7' || c2 != '8' || c3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				c3++;
			}
			c2++;
		}
		c1++;
	}
	putchar('\n');
	return (0);
}
