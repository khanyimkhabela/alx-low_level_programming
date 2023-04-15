#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: letters
 * Return: actual number of letters it could read and print, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, Read_Textfile);
	if (x == -1)
	{
		return (0);
	}
	buf = malloc(size of(char) * letters);
	t = read(x, buf, letters);
	y = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(x);
	return (y);
}
