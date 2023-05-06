#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 *@n: number
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int bin_no;

	bin_no = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (!i)
	{
		_putchar('0');
	}

	while (bin_no != 0)
	{

		if ((n & bin_no) == 0 && !i)
		{
			_putchar('0');
		}
		else if ((n & bin_no) != 0)
		{
			_putchar('1');
			i = 1;
		}
		bin_no >>= 1;

	}

}

