#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
/**
 * append_text_to_file - append text to the end of file
 * @filename: name of the file
 * @text_content: contents of the file
 *
 * Return: return 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, bw;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
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
