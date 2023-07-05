#include "main.h"

/**
 * _pow_erecursion - function calculates the power of a number raised to another number
 *
 * @x: Whole number to be raised
 *
 * @y: The power to which a whole number is raised
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
