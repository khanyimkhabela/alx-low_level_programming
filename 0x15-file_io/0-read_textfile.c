#include "main.h"

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: number of letters, else 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t readb;
	ssize_t writeb;

	file = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	readb = read(file, buf, letters);
	writeb = write(STDOUT_FILENO, buf, readb);

	if (filename == NULL)
	{
		return (0);
	}

	if (file == -1)
	{
		return (0);
	}

	if(readb == -1)
	{
		free(buf);
		close(file);
		return (0);
	}


	if (writeb == -1 || writeb != readb)
	{
		free(buf);
		close(file);
		return (0);
	}

	free(buf);
	close(file);
	return (writeb);
}
