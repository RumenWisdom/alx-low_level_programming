#include "main.h"

/**
 * puts_half - main entry function
 *
 * @str: Expected input
 *
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int i, d, num;

	num = 0;

	for (i = 0; str[i] != '\0'; i++)
		num++;

	d = (num / 2);

	if ((num % 2) == 1)
		d = ((num + 1) / 2);

	for (i = d; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
