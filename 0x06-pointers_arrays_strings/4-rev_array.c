#include "main.h"

/**
 * reverse_array - reverse the content of array @a
 * @a: array to be reversed
 * @n: number of the elements in @a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int p1 = 0;
	int p2 = n - 1;
	int tmp;

	while (p1 < p2)
	{
		tmp = a[p1];
		a[p1] = a[p2];
		a[p2] = tmp;
		p1++;
		p2--;
	}
}
