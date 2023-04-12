#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int b;

	for (a = 63; a >= 0; a--)
	{
		b = n >> a;
		if (b & 1)
		{
			_putchar (1);
				count++;
		}
		else if (count)
		{
			_putchar (0);
		}
	}
		if (!count)
		{
			_putchar (0);
		}
}
