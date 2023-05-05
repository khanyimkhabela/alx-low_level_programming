#include "main.h"

/**
 * flip_bits - returns no of bits needed to flip from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int i;
	

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((((n ^ m) >> i) & 1))
		count++;

	}

	return (count);
}
