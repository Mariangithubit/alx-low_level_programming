#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fb, fwr;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fb = open(filename, O_WRONLY | O_APPEND);

	if (fb == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
		fwr = write(fb, text_content, len);
		if (fwr == -1)
			return (-1);
	}
	close(fb);
	return (1);
}
