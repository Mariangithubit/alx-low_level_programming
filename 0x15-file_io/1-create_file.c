#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fb, fwr;
	int strlen;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}
	fb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwr = write(fb, text_content, strlen);

	if (fb == -1 || fwr == -1)
		return (-1);

	close(fb);
	return (1);
}
