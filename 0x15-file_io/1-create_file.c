#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
/**
 * create_file - creat a file
 * @filename: name of the file
 * @text_content: contents of the file
 *
 * Return: return 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f, bw;
	mode_t p;

	if (!filename)
		return (-1);
	p = S_IRUSR | S_IWUSR;
	f = open(filename, O_TRUNC | O_CREAT | O_WRONLY, p);
	if (f < 0)
		return (-1);
	if (!text_content)
	{
		close(f);
		return (-1);
	}
	bw = write(f, text_content, strlen(text_content));
	if (bw < 0)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
