#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function determines prime number
 *
 * @n: integer input to be determined
 *
 * Return: returnds 1 (true)if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function determines to prime number
 *
 * @n: interger input to be determined
 *
 * @i: the iterator
 *
 * Return: returns 1 (true)if n is a prime number, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
