#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: interger input
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
