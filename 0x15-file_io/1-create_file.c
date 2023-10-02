#include "main.h"

/**
 * create_file - to create a file
 * @filename: name of file
 * @text_content: string to write the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a, o, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a]; a++)
		{
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (o == NULL)
			return (-1);

	w = write(o, text_content, a);
	if (w == NULL)
		return (-1);

	close(o);

	return (1);
}
