#include "main.h"
/**
 * _strlen - The main entry point
 *
 * @s: character input
 *
 * Return: Always num (Success)
 */
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}

	return (num);
}
