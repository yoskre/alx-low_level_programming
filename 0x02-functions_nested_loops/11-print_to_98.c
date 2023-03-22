#include "main.h"
#include "stdio.h"
#define MAX 98

/**
 * print_to_98 - prints series of numbers from 'n' to 98
 * @n: start of series
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
		while (n < 98)
			printf("%d, ", n++);
	else
		while (n > 98)
			printf("%d, ", n--);
	printf("%d\n", 98);
}
