#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - print a name
 * @array: array
 * @size: size of @array
 * @action: function to be applied to @array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
