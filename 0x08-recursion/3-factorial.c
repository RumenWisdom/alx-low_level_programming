#include "main.h"

/**
 * factorial - function will determine and return a number's factorial
 *
 * @n: interger input of number to be factored
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
