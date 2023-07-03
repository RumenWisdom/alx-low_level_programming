#include "main.h"

/**
 * _strpbrk - Main entry point
 *
 * @s: Main interger input
 *
 * @accept: Main interger input
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int v;

		while (*s)
		{
			for (v = 0; accept[v]; v++)
			{
			if (*s == accept[v])
			return (s);
			}
		s++;
		}

	return ('\0');
}
