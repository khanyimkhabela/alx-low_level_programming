#include "main.h"

/**
 * binary_to_uint - coverts a binary number to an unsigned int
 * @b: string pointing to 0 and 1 chars
 * Return: coverted number,
 * else 0 if there is one or more chars in string b that is not o or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int i = 0;

	if (!b)
	{
		return (0);
	}
	for (a = 0; b[a]; a++)
	{
		if (b[a] < 0 || b[a] > 1)
			return (0);
		i = 2 * i + (b[a] - 0);
	}
	return (i);
}
