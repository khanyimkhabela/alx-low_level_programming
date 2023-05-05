#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: converted number, else 0 if b is NULLL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		number <<= 1;
		if (b[i] == '1')
		{
			number |= 1;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (number);
}
