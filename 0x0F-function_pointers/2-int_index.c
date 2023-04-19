#include "function_pointers.h"
/**
 * int_index - print a name
 * @array: array
 * @size: size of @array
 * @cmp: function to be used to compare @ array values
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && (size >= 0))
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) != 0)
				return (i);
	return (-1);
}
