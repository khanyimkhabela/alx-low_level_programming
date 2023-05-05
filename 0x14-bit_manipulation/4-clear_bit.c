#include "main.h"

/**
 * clear_bit - sets value of bit to zero at given index
 * @n: number
 * @index: index
 * Return: 1, esle -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
