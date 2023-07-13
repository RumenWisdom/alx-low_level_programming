#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function will add byte to memory
 *
 * @s: area for byte addition
 *
 * @b: character string to be copied
 *
 * @n: number input for copies
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - function will allocate memory
 *
 * @nmemb: number of elements
 *
 * @size: Individual elemet size
 *
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alt = malloc(size * nmemb);

	if (alt == NULL)
		return (NULL);

	_memset(alt, 0, nmemb * size);

	return (alt);
}
