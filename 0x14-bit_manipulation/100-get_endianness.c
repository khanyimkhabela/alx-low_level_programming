#include "main.h"
#include <string.h>

/**
 * get_endianness - checks for endianness
 * Return: 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int i;
	char c;

	i = 1;
	memcpy(&c, &i, sizeof(char));

	if (c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
