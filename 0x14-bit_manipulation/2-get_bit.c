#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	while (index > 63)
	{
		return (-1);
	}
	a = (n >> index) & 1;
	return (a);
}


