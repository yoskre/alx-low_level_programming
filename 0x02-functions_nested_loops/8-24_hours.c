#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int n = 0;

	while (n < 2359)
	{
		while ((n % 100) <= 59)
		{
			_putchar('0' + (n / 1000));
			_putchar('0' + ((n / 100) % 10));
			_putchar(':');
			_putchar('0' + ((n % 100) / 10));
			_putchar('0' + (n % 10));
			_putchar('\n');
			n++;
		}
		n += 40;
	}
}
