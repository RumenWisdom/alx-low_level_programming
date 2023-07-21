#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function will prints numbers, followed by a new line.
 *
 * @separator: String to be printed between numbers.
 *
 * @n: Total number of integers
 *
 * @...: variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list rou;
	unsigned int num1;

	va_start(rou, n);

	for (num1 = 0; num1 < n; num1++)
	{
		printf("%d", va_arg(rou, int));

		if (num1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(rou);
}
