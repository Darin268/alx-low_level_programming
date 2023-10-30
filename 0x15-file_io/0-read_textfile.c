#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - to read text file and print it to the POSIX standard output
 * @filename: file name string
 * @letters: number of letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char *) * letters);

	if (c == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
	{
		free(c);
		return (0);
	}

	r = read(o, c, letters);
	if (r == -1)
	{
		free(c);
		close(o);
		return (0);
	}

	w = write(STDOUT_FILENO, c, r);
	if (w == -1)
	{
		free(c);
		close(o);
		return (0);
	}
	free(c);
	close(o);
	return (w);
}
