#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '9')
			printf("%c", c);
		else
			printf("%c, ", c);
	}
	putchar('\n');
	return (0);
}
