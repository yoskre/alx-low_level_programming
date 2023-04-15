#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to array
 * @old_size: size of @ptr
 * @new_size: new size of @ptr
 *
 * Return: pointer to created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		;
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
	}
	else if (new_size < old_size)
	{
		p = memcpy(malloc(new_size), ptr, new_size);
		free(ptr);
		ptr = p;
	}
	else if (new_size > old_size)
	{
		p = memcpy(malloc(new_size), ptr, old_size);
		free(ptr);
		ptr = p;
	}
	return (ptr);
}
