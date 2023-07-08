#include "main.h"

/**
 * _memset - Values will fill up memory blocks
 *
 * @s: Memory address to be filled
 *
 * @b: desired input
 *
 * @n: interger input to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
