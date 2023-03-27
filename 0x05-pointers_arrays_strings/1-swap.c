#include "main.h"

/**
 * swap_int - swap value of two variables
 * @a: variable 1
 * @b: variable 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
