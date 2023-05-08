#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add and end of file
 * Return: 1 0n success, else -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int Open = 0;
	int Write = 0;
	int len = 0;

	Open = open(filename, O_WRONLY | O_APPEND);
	Write = write(Open, text_content, len);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	if (Open == -1 || Write == -1)
	{
		return (-1);
	}

	close(Open);

	return (1);
}
