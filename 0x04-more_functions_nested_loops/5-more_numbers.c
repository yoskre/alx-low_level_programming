#include "main.h"

/**
 * more_numbers - prints 0 to 9 and a new line 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	
	for (j = 10; j > 0; j--)
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
	_putchar('\n');
}
