#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b);
{
	int i;
	unsigned int number = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++);
	{

