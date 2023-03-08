#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - dertemines if integer is a prime number
 * @n: input number
 * Return: 1, else 0 if integer is not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if the  number is a prime number
 * @n: input number
 * @i: iterator
 * Return: 1, else 0 if n is not prime
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
