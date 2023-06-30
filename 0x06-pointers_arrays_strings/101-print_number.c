#include "main.h"

/**
 * print_number - Main entry
 *
 * @n: integer input
 *
 * Return: Always 0 (success)
 */

void print_number(int n)
{
	unsigned int kp;

	kp = n;

	if (n < 0)
	{
		_putchar('-');
		kp = -n;
	}

	if (kp / 10 != 0)
	{
		print_number(kp / 10);
	}
	_putchar((kp % 10) + '0');
}
