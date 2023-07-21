#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function will print any argument
 *
 * @format: list of arguments
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *sep = "";

	va_list litany;

	va_start(litany, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(litany, int));
					break;
				case 'a':
					printf("%s%d", sep, va_arg(litany, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(litany, double));
					break;
				case 's':
					str = va_arg(litany, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(litany);
}
