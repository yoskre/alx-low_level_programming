#include "main.h"
#include <stdio.h>
/**
 * print_array - prints @n elements of array @a
 * @a: array to be printed
 * @n : number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
