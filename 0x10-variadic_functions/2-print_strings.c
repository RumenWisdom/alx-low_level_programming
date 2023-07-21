#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function will print strings, followed by a new line.
 *
 * @separator: The string to be printed.
 *
 * @n: Number of strings passed
 *
 * @...: Number of strings to be printed(variable)
 *
 * Description: If separator is NULL, it is not printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letter;
	char *str;
	unsigned int num1;

	va_start(letter, n);

	for (num1 = 0; num1 < n; num1++)
	{
		str = va_arg(letter, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (num1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(letter);
}
