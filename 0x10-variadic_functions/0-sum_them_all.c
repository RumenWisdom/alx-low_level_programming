#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  function will return sum of its paramte input.
 *
 * @n: Number of paramters input
 *
 * @...: Parameter variable
 *
 * Return: If n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ru;
	unsigned int a, num = 0;

	va_start(ru, n);

	for (a = 0; a < n; a++)
		num += va_arg(ru, int);

	va_end(ru);

	return (num);
}
