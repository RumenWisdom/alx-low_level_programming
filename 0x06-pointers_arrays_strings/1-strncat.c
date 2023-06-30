#include "main.h"

/**
 * _strncat - main entry
 *
 * @dest: file destination input
 *
 * @src: file source input value
 *
 * @n: file input
 *
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int k;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
	dest[a] = src[k];
	a++;
	k++;
	}
	dest[a] = '\0';
	return (dest);
}
