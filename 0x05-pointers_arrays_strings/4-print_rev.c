#include "main.h"
/**
 * print_rev - main entry point
 *
 * @s: string to be inputed
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int num = 0;
	int storm;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	s--;
	for (storm = num; storm > 0; storm--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
