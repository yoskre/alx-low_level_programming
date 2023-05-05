#include "main.h"
/**
 * get_endianness - return endianness type of the system
 *
 * Return: 0 if bigendian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 0x1;
	unsigned int *p = &i;

	return (*p == 1 ? 1 : 0);
}
