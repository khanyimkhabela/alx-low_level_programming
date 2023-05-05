#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *@n: number
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin_no = 1 << 63;

	while (bit > 0)
	{
		if (n & bin_no)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bin_no >> 1;
	}

	if (n == 0)
	{
		_putchar('0');
	}
}

