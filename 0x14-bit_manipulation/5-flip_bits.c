#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip,
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int b;
	unsigned long int c = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		b = c >> 1;
		if (b & 1)
		{
			count++;
		}
	}
		return (count);
}
