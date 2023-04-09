#include "main.h"
#include <limits.h>
/**
 * _atoi - convert string @s to integer
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int n = 0;
	int coef = 10;
	int found = 0;

	while ((*s != 0))
	{
		if (found != 0 && !((*s >= '0') && (*s <= '9')))
		{
			break;
		}
		if (*s == '-')
		{
			sign *= -1;
		}
		if ((*s >= '0') && (*s <= '9'))
		{
			if (found == 1)
			{
				if ((n > INT_MAX / coef)
						|| (n == INT_MAX / coef && (*s - '0') > INT_MAX % coef))
				{
					if (sign > 0)
						return (INT_MAX);
					else
						return (INT_MIN);
				}
			}
			n *= coef;
			n += *s - '0';
			found = 1;
		}
		s++;
	}
	n *= sign;
	return (n);
}
