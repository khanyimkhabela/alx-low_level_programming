#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write file
 * Return: 1 on succes, else -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file = 0;
	int Write = 0;
	int len = 0;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	Write = write(file, text_content, len);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	if (file == -1)
	{
		return (-1);
	}

	if (Write == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (-1);
}
