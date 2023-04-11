#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument values
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		for (j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
