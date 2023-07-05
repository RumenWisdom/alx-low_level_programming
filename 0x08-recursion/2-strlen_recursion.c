#include "main.h"
/**
 * _strlen_recursion - function determines the length of any group of strings
 *
 * @s: character input/string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
