#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to write in the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, o, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	o = open(filename, 0_WRONLY | 0_APPEND);
	if (o == -1)
		return (-1);

	for (a = 0; text_content[a]; a++)
	{
	}

	w = write(o, text_content, a);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);
	return (1);
}
