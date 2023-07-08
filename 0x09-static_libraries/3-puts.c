#include "main.h"
/**
 * _puts - Entry point to the function
 *
 * @str: character or string input
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
