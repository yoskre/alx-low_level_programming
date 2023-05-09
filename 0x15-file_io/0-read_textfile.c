#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read a text file and prints it to POSIX standard output
 * @filename: file
 * @letters: number of letters to be printed
 *
 * Return: number of letters it could read and print, 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int lb, f, rb, wb;
	char *buff;

	if (!filename)
		return (0);
	lb = letters * sizeof(char);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	buff = malloc(lb);
	if (!buff)
	{
		close(f);
		return (0);
	}
	rb = read(f, buff, lb);
	if (rb < 0)
	{
		close(f);
		return (0);
	}
	wb = write(STDOUT_FILENO, buff, rb);
	if (wb != rb)
	{
		close(f);
		return (0);
	}
	close(f);
	return (wb);
}
